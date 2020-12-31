#include "naquestion.h"

double naquestion::getanswer_min()
{
	return answer_min;
}

double naquestion::getanswer_max()
{
	return answer_max;
}

void naquestion::setanswermin(double _answer_min)
{
	answer_min = _answer_min;


}

void naquestion::setanswermax(double _answer_max)
{

	answer_max = _answer_max;
}









bool naquestion::CheckAnswer(int _input)
{
	return false;
}

bool naquestion::Check_Answer(double _userinput)
{

	return (_userinput < answer_max && _userinput > answer_min);
		





}

void naquestion::display()
{
	string question = gettext();


	cout << question;



}







