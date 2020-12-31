#pragma once
#include <iostream>



using namespace std;



class question {

private:

	string text;


public:
	virtual void display() = 0;
	virtual bool CheckAnswer(int _input)=0;
	
	
	void settext(  string _text);
	string gettext();
	
	question();


};
