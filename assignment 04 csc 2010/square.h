#pragma once
class square
{


private:
	double length;






public:
	void setlength(double _length);
	double GetLength();
	double area();

    square operator+ (square sq1);




};

