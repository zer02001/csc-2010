#include "accquestion.h"

void accquestion::setCorrectAnswer(int correctanswers[])
{

	for (int i =0 ; i < 4; i++)
	correct_answer[i] = correctanswers[i];




}

int* accquestion::getCorrectAnswer()
{

	int correctanswer[4];
	for (int i = 0; i < 4; i++)
		correctanswer[i] = correct_answer[i];


	return correctanswer;
}

bool accquestion::CheckAnswer(int answers[])
{

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			if (correct_answer[i] == answers[i]) {

				return true;

				break;
			}
		}

			return false;
	}
	
}
void accquestion::display()
{
	cout << gettext();
	cout << endl;

	for (int i = 0; i < 4; i++) {
	
	
		std::cout << i + 1 << ". " << choices[i] << std::endl;
	
	
	}




}
void accquestion::setchoices(int position, string _string)
{

	if (position >= 0 && position < 4) {
		choices[position] = _string;
	}

	else {

		cout << "error" << endl;
	}


}

bool accquestion::CheckAnswer(int _input)
{
	return false;
}

