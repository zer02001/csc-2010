#include <iomanip>
#include<iostream>
using namespace std;


int main()
{

	int feet;
	int inches;
	int Feet_to_inches;
	double answer;
	
	setprecision(2);
try {
	
		cout << "please enter your height in feet and inches (enter feet first then space and inches): ";
		cin >> feet >> inches;
		cout << endl;
		
		if (feet > 0 && inches > 0) {

			Feet_to_inches = feet * 12;
			answer = ((Feet_to_inches + inches) * 2.54);
			cout << "Your hieght equivelent in centimeters is: " << answer;


		}
	
		else {
		
			throw - 1;
		}
	
	
	
	
	
	
	
	
	
	
	}


catch (int x) {

	cout << "EROR: please try Again enter your height in feet and inches (enter feet first then space and inches): " << endl;
	cin >> feet >> inches;


	
	if (feet > 0 && inches > 0) {
		Feet_to_inches = feet * 12;
		answer = ((Feet_to_inches + inches) * 2.54);

		cout << "Your hieght equivelent in centimeters is: " << answer;


	}

}






}

