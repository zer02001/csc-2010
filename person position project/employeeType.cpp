#include "employeeType.h"

void employeeType::setData(string n, string d, int a, double p)
{
}

void employeeType::setName(string n)
{
}

string employeeType::getName() const
{
	return name;
}

void employeeType::setDepartment(string dept)
{
	department = dept;
}

string employeeType::getDepartment() const
{
	return department;
}

void employeeType::setAge(int a)
{
	age = a;
}

int employeeType::getAge() const
{
	return age;
}

void employeeType::setPay(double p)
{

	pay = p;

}

double employeeType::getPay() const
{
	return pay;
}

employeeType::employeeType(string n, string d, int a, double p)
{

	age = a;
	name = n;
	department = d;
	pay = p;

}
