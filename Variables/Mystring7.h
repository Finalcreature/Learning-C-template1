#pragma once
#include <iostream>
class Mystring7
{
	friend std::ostream& operator << (std::ostream& os, const Mystring7& rhs);
	friend std::istream& operator >> (std::istream& in, Mystring7& rhs);

private:
	char* str; //pointer to a char[] that holds a C-style string
public:
	Mystring7(); //No-args constructor
	Mystring7(const char* s); //Overloaded constructor
	Mystring7(const Mystring7& source); //Copy constructor
	Mystring7(Mystring7&& source); //Move constructor
	~Mystring7(); //Destructor


	Mystring7& operator=(const Mystring7& rhs); //Copy assignment
	Mystring7& operator=(Mystring7&& rhs); //Move assignemt

	void display() const;

	int get_length() const; //getters
	const char* get_str() const;
};

