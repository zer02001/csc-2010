#pragma once
#include <iostream>
#include "question.h"
using namespace std;




class occquestion: public question {

public:


	occquestion();
	void setcorrectanswer(int _answer);
	int getcorrectanswer();
	void setchoices(int position, string _string);
	string getAnswer(int positions);
	bool CheckAnswer(int _input);
	void display();
	void setAnswer(int position, string _string);



private:

	int correct_answer;
	string choices[4];





















};