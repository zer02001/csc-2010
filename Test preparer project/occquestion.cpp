#include "occquestion.h"

occquestion::occquestion()
{





}

void occquestion::setcorrectanswer( int _answer)
{
	correct_answer = _answer;



}

int occquestion::getcorrectanswer()
{
	

	return correct_answer;


}
void occquestion::setchoices(int position, string _string)
{

	if (position >= 0 && position < 4) {
		choices[position] = _string;
	}

	else {

		cout << "error" << endl;
	}


}

string occquestion::getAnswer(int positions)
{
	return choices[positions];


}
bool occquestion::CheckAnswer(int _input)
{

	if (correct_answer == _input) {

		return true;


	}

	else return false;


}

void occquestion::display() {

	cout << gettext();
	cout << endl;
	for (int i = 0; i < 4; i++) {
		std::cout << i + 1 << ". " << choices[i] << std::endl;
	}






}

void occquestion::setAnswer(int position, string _string)
{

	if (position >= 0 && position < 4) {
		choices[position] = _string;
	}

	else {

		cout << "error" << endl;
	}


}