//personTypeImp.cpp

#include <iostream>
#include <string>
#include "personType.h"

using namespace std;

void personType::print() const
{
    cout << firstName << " " << middleName<<" " << lastName  ;
}

void personType::setName(string first, string last)
{
    firstName = first;
    lastName = last;
}



void personType::setFirstName(string _firstName)
{

    firstName = _firstName;
}

void personType::SetLastName(string _lastname)
{

    lastName = _lastname;
}

void personType::SetMiddleName(string _middleName)
{

    
    middleName = _middleName;
}

bool personType::isfirstNameThesame(string _firstName)
{
    return (_firstName == firstName);
}

bool personType::isLastNameTheSame(string _LastName)
{
    return (_LastName == lastName);
}

string personType::getFirstName() const
{
    return firstName;
}

string personType::getLastName() const
{
    return lastName;
}

//constructor
personType::personType(string first, string last, string _middlename)

{
    middleName = _middlename;
    firstName = first;
    lastName = last;
}
