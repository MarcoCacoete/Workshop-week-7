#include "A.h"
#include<iostream>




	
	A::A() {
		string name = "default";
		cout<<"Created "<<name << "." <<endl;
	}
	A::A(string i) {
		privName = i;
		cout << "Created "<<i << "." << endl;

	}
	A::A(const A& obj) {

		privName = obj.privName;
		cout << "Created a copy" << endl;
	}
	A::~A() {
		cout << "Destroyed "<<privName << "." << endl;
	
	}

	void A::setName(string i) {
		privName = i;
		cout << "Changed name to " << privName << "." << endl;
	}

	void A::printName() {
		cout << "Name is " << privName << "." <<endl;
	}


	
