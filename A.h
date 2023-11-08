#pragma once
#include <string>
using namespace std;


class A
{

public:

	A();

	A(string i);

	void setName(string i);

	void printName();

	string name;
private:

	string privName;

};

