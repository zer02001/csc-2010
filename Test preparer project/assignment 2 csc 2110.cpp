#include "quiz.h"
#include"question.h"
#include "occquestion.h"
#include "naquestion.h"



int main() {



	quiz quiz1;


	std::cout << "Quiz example\n";
	
	quiz1.setTitle("Introduction to Object-Oriented Programming");

	quiz1.occquestion.settext("how many months are in the year?");
	quiz1.occquestion.setAnswer(0, "12");
	quiz1.occquestion.setAnswer(1, "15");
	quiz1.occquestion.setAnswer(2, "11");
	quiz1.occquestion.setAnswer(3, "8");
	quiz1.occquestion.setcorrectanswer(0);
	quiz1.naquestion.settext("what is one year that world war 1 was happening in:");
	quiz1.naquestion.setanswermax(1918);
	quiz1.naquestion.setanswermin(1914);
	quiz1.naquestion.settext("what year was the first electric car made? ");
	quiz1.naquestion.setanswermax(1893);
	quiz1.naquestion.setanswermin(1888);
	
	quiz1.saquestion.settext("what month is thanksgiving in: ");
	quiz1.saquestion.setAnswer("november");
	quiz1.accquestion.settext("what 2 years did brazil win the worldcup? ");
	quiz1.accquestion.setchoices(0, "2002");
	quiz1.accquestion.setchoices(1, "1990");
	quiz1.accquestion.setchoices(2, "1994");
	quiz1.accquestion.setchoices(3, "1777");
	int arr[4] = { 0,2 };
	quiz1.accquestion.setCorrectAnswer(arr);
	quiz1.start();
	quiz1.quizGrade();














}
