#pragma
#ifndef A_H
#define A_H

#include <iostream>
using namespace std;


class A
{

public:
	string name;
	/// <summary>
	/// Default constructor
	/// </summary>
	A();
	/// <summary>
	/// Overloaded constructor
	/// </summary>
	/// <param name="i"></param>
	A(string i);
	/// <summary>
	/// Copy Constructor for deep copy
	/// </summary>
	/// <param name="obj"></param>
	A(const A& obj);
	/// <summary>
	/// Destructor
	/// </summary>
	~A();
	/// <summary>
	/// Mutator
	/// </summary>
	/// <param name="i"></param>
	void setName(string i);
	/// <summary>
	/// Method to output name
	/// </summary>
	void printName();

	
private:

	string privName;

};
#endif 
