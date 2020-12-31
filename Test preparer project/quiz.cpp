#include <string>
#include "question.h"
#include "quiz.h"
#include <ctime>
#include <algorithm>
using namespace std;

void quiz::setTitle(std::string arg_title) {
	title = arg_title;
}

std::string quiz::getTitle() {
	return title;
}

void quiz::start() {

	int user_input;

	std::cout << "Title: " << title << std::endl;


	
	

	

		
		occquestion.display();
		std::cout << "Choice: ";

		std::cin >> user_input;


		if (occquestion.CheckAnswer(user_input - 1) == true)
			rightanswer++;


		std::cout << "\n";

		

	
	
		double nauserinput;

		naquestion.display();
		

		std::cin >> nauserinput;


		if (naquestion.CheckAnswer(nauserinput) == true)
			rightanswer++;


		std::cout << "\n";

		totalanswers += 1;

	
	
		string sauser_input;

		saquestion.display();

		

		std::cin >> sauser_input;


		if (saquestion.answerCheck(sauser_input ) == true)
			rightanswer++;


		std::cout << "\n";

		totalanswers += 1;
		//////////////////////////////

		int acc_input;
		int inputs[4];
		accquestion.display();

		for (int i = 0; i < 4; i++) {
		
		
			cout << "enter the choices that you think are true or else enter 5: ";
			cin >> acc_input;

			if (acc_input == 5)
				break;

			else
				inputs[i] = (acc_input -1);

		
		
		
		}


		if (accquestion.CheckAnswer(inputs) == true)
			rightanswer++;

		totalanswers += 1;



}

void quiz::quizGrade()
{
	double grade = 0;
	grade = ((double)rightanswer / (double)totalanswers) * 100;

	cout << "The percentage grade you got on the quiz is: " << grade << "%. ";


}

bool quiz::CheckAnswer(int _input)
{
	return false;
}

void quiz::display()
{
}
