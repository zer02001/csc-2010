// csc 2111 lab4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;



int main()
{
	int A, B, C;


	cout << "please Enter the length for Side A: ";
	cin >> A;

	cout << "please Enter the length for Side B: ";
	cin >> B;

	cout << "please Enter the length for Side C: ";
	cin >> C;


	if (A > B&& A > C) {
	
		if ((pow(A,2))==(pow(B,2)+(pow(C,2)))) {

			cout << "The triangle is a right triangle!!!" << endl;


		}
		else cout << "The triangle isnot a right triangle." << endl;
	
	}
	else if (B > A&& B > C) {
		if ((pow(B, 2)) == (pow(A, 2) + (pow(C, 2)))) {

			cout << "The triangle is a right triangle!!!" << endl;


		}
		else cout << "The triangle isnot a right triangle." << endl;
	
	
	
	}

	else if (C > A&& C > B) {
	
		if ((pow(C, 2)) == (pow(B, 2) + (pow(A, 2)))) {

			cout << "The triangle is a right triangle!!!" << endl;


		}
		else cout << "The triangle isnot a right triangle." << endl;
	
	
	
	}

	else cout << "The triangle isnot a right triangle." << endl;
	


}


