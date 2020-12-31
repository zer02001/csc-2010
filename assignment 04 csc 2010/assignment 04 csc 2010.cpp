// assignment 04 csc 2010.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "square.h"
using namespace std;
int main()
{



    square sq1;
    square sq2;
    square sq3;
    sq1.setlength(15);
    sq2.setlength(16);

    sq3 = sq1 + sq2;


    cout << "the length of the first square: " << sq1.GetLength() << endl;
    cout << "the length of the first square: " << sq2.GetLength() << endl;
    cout << "the length of the first square: " << sq3.GetLength();




}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
