
#include <iostream>
#include <ostream>
#include <time.h>
#include<conio.h>
using namespace std;

enum eDir { STOP = 0, LEFT = 1, UPLEFT = 2, DOWNLEFT = 3, RIGHT = 4, UPRIGHT = 5, DOWNRIGHT = 6 };

class cball {

private:

	int x, y;
	int originalx, originaly;
	eDir direction;
public:
	cball(int posx, int posy) {

		originalx = posx;
		originaly = posy;
		x = posx;
		y = posy;
		direction = STOP;




	}
	void reset() {

		x = originalx; y = originaly;
		direction = STOP;


	}


	void changedirection(eDir d) { direction = d; }

	inline int getx() { return x; }

	inline int gety() { return y; }

	void randomdirection() {

		direction = (eDir)((rand() % 6) + 1);

	}
	inline eDir getDIrection() { return direction; }

	void move() {

		switch (direction) {


		case STOP:
			break;

		case LEFT:
			x--;
			break;
		case RIGHT:
			x++;
			break;
		case UPLEFT:
			x--; y--;
			break;
		case DOWNLEFT:
			x--; y++;
			break;
		case UPRIGHT:
			x++;
			y--;
			break;
		case DOWNRIGHT:
			x++; y++;
			break;
		default:
			break;



		}


	}
	friend ostream& operator << (ostream& o, cball c)
	{
		o << "ball[" << c.x << "," << c.y << "][" << c.direction << "]";
		return o;
	}
};
class cpaddle {

	private:
		int x, y;
		int originalx, originaly;
public:

	cpaddle() {

		x = y = 0;



	}
	cpaddle(int posx, int posy) :cpaddle() {

		originalx = posx;
		originaly = posy;
		x = posx;
		y = posy;




	}
	inline void reset() {

		x = originalx;
		y = originaly;
	}

	inline int getx() {
		return x;
	}
	inline int gety() {
		return y;

	}
	inline void moveup() {y--;}
	inline void movedown() { y++; }

	friend ostream& operator << (ostream& o, cpaddle c)
	{
		o << "paddle [" << c.x << "," << c.y <<"]";
		return o;
	}
};

class cgamemanager {

private:
	int width, height;
	int score1, score2;
	char up1, down1, up2, down2;
	bool quit;
	cball* ball;

	cpaddle* player1;
	cpaddle* player2;

public:
	cgamemanager(int w, int  h) {

		srand(time(NULL));
		quit = false;
		up1 = 'w'; up2 = 'i';
		down1 = 's'; down2 = 'k';
		score1 = score2 = 0;
		width = w; height = h;
		ball = new cball(w / 2, h / 2);
		player1 = new cpaddle(1, h / 2 - 3);
		player2 = new cpaddle(w - 2, h / 2 - 3);


	}

	~cgamemanager() {

		delete ball, player1, player2;
	}

	void scoreup(cpaddle* player) {

		if (player == player1)
			score1++;
		else if (player == player2)
			score2++;
		ball->reset();
		player1->reset();
		player2->reset();

	}
	void draw() {


		system("cls");

		for (int i = 0; i < width + 2; i++)
			cout << "\xB2";
		cout << endl;

		for (int i = 0; i < height; i++) {


			for (int j = 0; j < width; j++)

			{

				int ballx = ball->getx();
				int bally = ball->gety();
				int player1x = player1->getx();
				int player2x = player2->getx();
				int player1y = player1->gety();
				int player2y = player2->gety();

				if (j == 0)
					cout << "\xB2";

				if (ballx == j && bally == i)
					cout << "O";
				else if (player1x == j && player1y == i)

					cout << "\xDB";
				else if (player2x == j && player2y == i)

					cout << "\xDB";

				else if (player1x == j && player1y + 1 == i)

					cout << "\xDB";
				else if (player1x == j && player1y + 2 == i)

					cout << "\xDB";
				else if (player1x == j && player1y + 3 == i)

					cout << "\xDB";
				else if (player2x == j && player2y + 1 == i)

					cout << "\xDB";
				else if (player2x == j && player2y + 2 == i)

					cout << "\xDB";
				else if (player2x == j && player2y + 3 == i)

					cout << "\xDB";




				else
					cout << " ";


				if (j == width - 1)
					cout << "\xB2";

			}


			cout << endl;

		}








		for (int i = 0; i < width + 2; i++)
			cout << "\xB2";
		cout << endl;



	}
	void input() {

		ball->move();


		int ballx = ball->getx();
		int bally = ball->gety();
		int player1x = player1->getx();
		int player2x = player2->getx();
		int player1y = player1->gety();
		int player2y = player2->gety();

		if (_kbhit()) {

			char current = _getch();
			if (current == up1)
				if (player1y > 0)
					player1->moveup();
			if (current == up2)
				if (player2y > 0)
					player2->moveup();
			if (current == down1)
				if (player2y + 4 < height)
					player2->movedown();
			if (current == down2)
				if (player2y + 4 < height)
					player2->movedown();

			if (ball->getDIrection() == STOP) {
				ball->randomdirection();
			}

			if (current == 'q')
				quit = true;
		}


	}
	void logic() {
		int ballx = ball->getx();
		int bally = ball->gety();
		int player1x = player1->getx();
		int player2x = player2->getx();
		int player1y = player1->gety();
		int player2y = player2->gety();
		// left paddle
		for (int i = 0; i < 4; i++)
			if (ballx == player1x + 1)
				ball->changedirection((eDir)((rand() % 3) + 4));

		// right paddle
		for (int i = 0; i < 4; i++)
			if (ballx == player2x - 1)
				if (bally == player2x - 1)

					ball->changedirection((eDir)((rand() % 3) + 1));//plus 1 because we want to take it to the left and up left


		if (bally == height - 1)
			ball->changedirection(ball->getDIrection() == DOWNRIGHT ? UPRIGHT : UPLEFT);

		if (bally == 0)
			ball->changedirection(ball->getDIrection() == DOWNRIGHT ? UPRIGHT : UPLEFT);

		if (ballx == width - 1)
			scoreup(player1);
		if (ballx == 0)
			scoreup(player2);
	}

	void run() {

		while (!quit) {


			draw();
			input();
			logic();
		}

	}
};

int main()
{
	cgamemanager c (40, 20);
	c.run();
	
	cin.get();
}
