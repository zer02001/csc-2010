#pragma once
#include <iostream>
#include "question.h"
using namespace std;


class accquestion: public question {

public:


	void setCorrectAnswer(int correctanswers[]);
	int * getCorrectAnswer();
	bool CheckAnswer(int answers[]);
	void display();
	void setchoices(int position, string _string);
	bool CheckAnswer(int _input) override;

	
	


private:
	int correct_answer[4];
	string choices[4];










};