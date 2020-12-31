// persontype lab csc 2111.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "personType.h"
int main()
{
    personType obj1("Hassan" ,"Said", "Bilal");

    if (!obj1.isfirstNameThesame("Ali")) {
    
    
        obj1.setFirstName("Ali");
    
    
    }

    if (!obj1.isLastNameTheSame("Said")) {


        obj1.SetLastName("Said");


    }
    obj1.print();

   







}

