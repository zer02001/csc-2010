#pragma once

#include "question.h"
#include <iostream>




class naquestion : public question {



private:
	double answer_min;
	double answer_max;



public :


	double getanswer_min();
	double getanswer_max();

	void setanswermin(double _answer_min);
	void setanswermax(double _answer_max);

	bool CheckAnswer(int _input) override;
	bool  Check_Answer(double _userinput) ;
	
	void display();





};