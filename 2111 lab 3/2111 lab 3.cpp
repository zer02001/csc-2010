// 2111 lab 3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<iomanip>
#include <fstream>

using namespace std;

int main()
{

	ofstream outfile;
	int numOfJuiceBottlesSold = 35;

	double costOfaJuiceBottle = 0.75;

	double revenue;

	outfile.open("C:/test/sales.dat.txt");
	if (!outfile.is_open()) {

		cout << "Error the file couldnot be opened" << endl;
	}

	else {
		revenue = numOfJuiceBottlesSold * costOfaJuiceBottle;


		outfile << "The number of juice bottles sold is: " << numOfJuiceBottlesSold << endl;
		outfile << "The price of the juice bottles is: " << costOfaJuiceBottle << endl;
		outfile << "The revenue made from selling juice Bottles: " << revenue << endl;


			outfile.close();
			
	}





}

