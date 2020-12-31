#pragma once

#include <iostream>
#include "personType.h"
using namespace std;

class employeeType : public personType {

private:


	string name;

	string department;

	int age;

	double pay;








public:
	void setData(string n = "", string d = "", int a = 0, double p = 0);

	void setName(string n);

	string getName() const;

	void setDepartment(string dept);

	string getDepartment() const;

	void setAge(int a);

	int getAge() const;

	void setPay(double p);

	double getPay() const;

	employeeType (string n = "", string d = "", int a = 0, double p = 0);





};

