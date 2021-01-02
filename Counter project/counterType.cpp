#include "counterType.h"





counterType::counterType() {


	counter = 0;

}
void counterType::set_count( int _count)
{


	counter = _count;




}

int counterType::getCountervalue()
{
	return counter;


}

void counterType::counter_increment()
{
	while (counter < 0) {

		cout << "Invalid Please enter a nonnegative number for counter: ";
		cin >> counter;








	}

	counter += 1;



}

void counterType::counter_decrement()
{
	while (counter < 0) {

		cout << "Invalid Please enter a nonnegative number for counter: ";
		cin >> counter;








	}

	counter -= 1;



}
