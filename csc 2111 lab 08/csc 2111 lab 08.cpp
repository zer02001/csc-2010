#include <iostream>
#include <fstream>
using namespace std;
void getdata(string[], int[][5]);
void getaverage(int[][5], double[]);
void print(string[], int[][5], double[]);
int main()
{
	double avg;
	int grades[10][5];
	string names[10];
	double average[10];
	int tot;
	getdata(names, grades);
	getaverage(grades, average);
	print(names, grades, average);
	system("pause");
	return 0;
}
void print(string names[], int grades[][5], double avg[])
{
	int i, j;
	cout << "name\t   test grades\taverage\tgrade\n";
	for (i = 0; i < 10; i++)
	{
		cout << names[i] << "\t";
		for (j = 0; j < 5; j++)
			cout << grades[i][j] << " ";
		cout << "\t" << avg[i] << "\t";
		if (avg[i] >= 90)
			cout << "A" << endl;
		else if (avg[i] >= 80)
			cout << "B" << endl;
		else if (avg[i] >= 70)
			cout << "C\n";
		else if (avg[i] >= 60)
			cout << "D\n";
		else
			cout << "F\n";
	}
}
void getaverage(int grades[][5], double avg[])
{
	int i, j, tot;
	for (i = 0; i < 10; i++)
	{
		tot = 0;
		for (j = 0; j < 5; j++)
			tot += grades[i][j];
		avg[i] = tot / 5.;
	}
}
void getdata(string names[], int grades[][5])
{
	ifstream in;
	int i, j;
	in.open("testscores.txt");           //open file
	if (in.fail())             //is it ok?
	{
		cout << "file did not open please check it\n";
		system("pause");
		exit(1);
	}

	for (i = 0; i < 10; i++)
	{
		in >> names[i];
		for (j = 0; j < 5; j++)
			in >> grades[i][j];
		in.ignore('\n', 10);
	}
}
