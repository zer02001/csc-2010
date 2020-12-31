#pragma once
#include"question.h"



class saquestion : public question {

private:

	string answer;




public:
	string getAnswer();
	void setAnswer(string _answer);
	bool CheckAnswer(int _input) override;
	bool answerCheck(string _userinput);
	void display();
	



















};