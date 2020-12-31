// lab 9 csc 2111.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;
struct studenttype {

	string StudentFname, StudentLname;
	int testscore;
	char grade;








};
void readData(ifstream& file_obj, struct studenttype obj[])

{

	int curr_student = 0;

	while (!file_obj.eof())

	{

		file_obj >> obj[curr_student].StudentFname;

		file_obj >> obj[curr_student].StudentLname;

		file_obj >> obj[curr_student].testscore;

		curr_student++;

	}

}

int highest_testscore(struct studenttype obj[]) {
	int highestScore = 0;
	for (int i = 0; i < 20; i++) {

		if (obj[i].testscore > highestScore) {

			highestScore = obj[i].testscore;

		}


	}


	return highestScore;
}

void assigngrades(struct studenttype obj[]) {

	for (int i = 0; i < 20; i++) {

		if (obj[i].testscore < 60)
			obj[i].grade = 'E';

		else if (obj[i].testscore >= 60 && obj[i].testscore < 70)
			obj[i].grade = 'D';

		else if (obj[i].testscore >= 70 && obj[i].testscore < 80)
			obj[i].grade = 'C';

		else if (obj[i].testscore >= 80 && obj[i].testscore < 90)
			obj[i].grade = 'B';
		else if (obj[i].testscore >= 90 && obj[i].testscore <= 100)
			obj[i].grade = 'A';


	}














}


void printData(ofstream& _out, struct studenttype obj[] , int highscore)

{

	_out << left << setw(20) << "Student Name";

	

	_out << "Test Score";

	_out << " Grade";

	_out << endl;

	for (int i = 0; i < 20; i++)

	{

		_out << left << setw(20) << obj[i].StudentLname + ", " + obj[i].StudentFname << right << setw(12) << obj[i].testscore << right << setw(8) << obj[i].grade;

		_out << endl;

	}

	_out << endl;
	_out << "the highest score on the test was " << highscore << endl;

}

int main()
{

	ifstream infile;
	infile.open("D:/c+++/testsdata.txt");

	ofstream outfile;
	outfile.open("D:/c+++/outtestsdata.txt");



	studenttype students[20];

	readData(infile, students);
	assigngrades(students);
	int highest_score = highest_testscore(students);
	printData(outfile, students , highest_score);




}