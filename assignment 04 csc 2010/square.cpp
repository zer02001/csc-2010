#include "square.h"

void square::setlength(double _length)
{

	length = _length;
}

double square::GetLength()
{
	return length;
}

double square::area()
{
	double _area = length * length;

	return _area;
}

square square::operator+(square sq1)
{
    square temp;
    temp.length = length + sq1.length;

    return temp;
}

