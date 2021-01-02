#include "counterType.h"





int main() {

	counterType CC;
	int number;


	cout << "Enter a number for the counter: ";
	cin >> number;
	cout << endl;


	CC.set_count(number);

	cout << "value of counter before increment: " << CC.getCountervalue();
	cout << endl;
	CC.counter_increment();

	cout << "value of counter after increment: " << CC.getCountervalue();

	cout << endl << endl;

	cout << "value of counter before decrement: " << CC.getCountervalue();
	cout << endl;
	CC.counter_decrement();
	cout << "value of counter after decrement: " << CC.getCountervalue();

	cout << endl;


}