// Workshop week 7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//



#include <iostream>
#include "A.h"
#include "a.cpp"
#include <string>
using namespace std;

int main() {
	A* a1 = new A( “a”);
	a1->setName( “IamA”);
	A a2 = *a1;
	delete a1;
	a2.printName();
}


