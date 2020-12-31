// Assignment 05.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

bool Palindrome(string _input, int size, int first_position) {

	if (first_position == size) return true;


	if (_input[size] != _input[first_position]) {



		return false;
	}
	if (size > first_position + 1) {

		return Palindrome(_input, size - 1, first_position + 1);
	}

	return true;











}




int main()
{
	string input;

	cout << "Please Enter a string to check weather its a palindrome: ";
	cin >> input;
	while (input.length() <= 2 || input.length() % 2 == 0) {
	
	
		cout << "Error please enter a string that has an odd number of letter and more than 2 characters: ";
			cin >> input;
	
	
	
	}
	


	int size_input = input.length() - 1;


	int firstPostion = 0;


	bool answer = Palindrome(input, size_input, firstPostion);


	if (answer == true) {

		cout << "the string is a palindrome";


	}
	else cout << "The string isnot a plaindrome";






}