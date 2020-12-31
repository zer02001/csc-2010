#include "mcquestion.h"

mcquestions::mcquestions()
{


}

void mcquestions::setAnswer(int position, string _string)
{ 
	
	if (position >= 0 && position < 4) {
		choices[position] = _string;
	}

	else {

		cout << "error" << endl;
	}


}

string mcquestions::getAnswer(int positions)
{
	return choices [positions];


}



void mcquestions::display() {
	

	cout << gettext();
	for (int i = 0; i < 4; i++) {
		std::cout << i + 1 << ". " << choices[i] << std::endl;
	}
}

void mcquestions::setrightanswer(int _answer)
{

	answer = _answer;






}



bool mcquestions::CheckAnswer(int _input)
{

	if (answer == _input) {

		return true;


	}

	else return false;


}
