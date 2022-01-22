#define _CRT_SECURE_NO_WARNINGS
#include "Mystring7.h"
#include <iostream>
#include <cstring>

/*No-args constructor*/
Mystring7::Mystring7()
	: str{ nullptr } {
	str = new char[1];
	*str = '\0';
}

/*Overloaded constructor*/
Mystring7::Mystring7(const char* s)
	:str{ nullptr } {
	if (s == nullptr) {
		str = new char[1];
		*str = '\0';
	}
	else {
		str = new char[strlen(s) + 1];
		strcpy(str, s);
	}
}

/*Copy constructor*/
Mystring7::Mystring7(const Mystring7& source)
	:str{ nullptr } {
	str = new char[strlen(source.str) + 1];
	strcpy(str, source.str);
	std::cout << "Copy constructor used" << std::endl;
}

/*Move constructor*/
Mystring7::Mystring7(Mystring7&& source)
	:str(source.str) {
	source.str = nullptr;
	std::cout << "Move constructor used" << std::endl;
}

/*Destructor*/
Mystring7::~Mystring7() {
	delete[]str;
}

/*Copy assignment*/
Mystring7& Mystring7::operator=(const Mystring7& rhs) {
	std::cout << "Using copy assignmnet" << std::endl;

	if (this == &rhs)
		return *this;
	delete[] str;
	str = new char[strlen(rhs.str) + 1];
	strcpy(str, rhs.str);
	return *this;
}

/*Move assignment*/
Mystring7& Mystring7::operator=(Mystring7&& rhs) {
	std::cout << "Using move assignment" << std::endl;
	if (this == &rhs)
		return *this;
	delete[] str;
	str = rhs.str;
	rhs.str = nullptr;
	return *this;
}

/*Display method*/
void Mystring7::display() const {
   std::cout << str << " : " << get_length() << std::endl;
}


/* length getter*/
int Mystring7::get_length() const { return std::strlen(str); }

/* string getter*/
const char* Mystring7::get_str() const { return str; }

/*Overloaded insertion operator*/
std::ostream& operator<<(std::ostream& os, const Mystring7& rhs) {
    os << rhs.get_str();
    return os;
}

/*Overload extraction operator*/
std::istream& operator>>(std::istream& in, Mystring7& rhs) {
    char* buff = new char[1000];
    in >> buff;
    rhs = Mystring7{ buff };
    delete[]buff;
    return in;
}