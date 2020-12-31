#include "saquestion.h"

string saquestion::getAnswer()
{
	return answer;
}

void saquestion::setAnswer(string _answer)
{
	answer = _answer;

}

bool saquestion::CheckAnswer(int _input)
{
	return false;
}

bool saquestion::answerCheck(string _userinput)
{
	if (_userinput == answer)
		return true;

	else return false;





}
void saquestion::display()
{
	string question = gettext();


	cout << question;



}





