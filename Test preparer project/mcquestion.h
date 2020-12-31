#pragma once
#include "question.h"

#include <iostream>


using namespace std;



class mcquestions: public question {


private:

	string choices[4];

	int answer;
	



public:

	mcquestions();
	 void setAnswer( int position, string _string);
	 string getAnswer(int positions);
	 bool CheckAnswer(int _input) ;
	 void display();
	 void setrightanswer( int Answer);
	

};
