#include "A.h"
#include<iostream>




class A {
public:
	A() {
		privName = name;

	}
	A(string i) {
		privName = i;

	}
	/// <summary>
	/// Mutator method for class A
	/// </summary>
	void setName(string i) {
		privName = i;
	}
	/// <summary>
	/// Accessor method for class A
	/// </summary>
	void printName() {
		cout << "Name is " << privName << "." <<endl;
	}
	string name = "default";
private:
	string privName;
};