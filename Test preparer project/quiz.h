#pragma once
#include <string>

#include "mcquestion.h"
#include "naquestion.h"
#include "saquestion.h"
#include "accquestion.h"
#include "occquestion.h"

class quiz : public question{
private:
	std::string title;
	int rightanswer = 0;
	int totalanswers = 0;
public:
	
	
	
	naquestion naquestion;
	saquestion saquestion;
	accquestion accquestion;
	occquestion occquestion;
	void setTitle(std::string arg_title);
	std::string getTitle();
	void start();
	void quizGrade();
	bool CheckAnswer(int _input);
	void display();

};