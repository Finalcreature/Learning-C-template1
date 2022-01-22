//#define _CRT_SECURE_NO_WARNINGS
//#include <cstring>
//#include <iostream>
//#include "Mystring2.h"
//
//
//	/*No-args constructor*/
//	Mystring2::Mystring2()
//		:str{ nullptr } {
//		str = new char[1];
//		*str = '\0';
//	}
//	
//	/*Overlaoded constructor*/
//	Mystring2::Mystring2(const char* s)
//		: str{ nullptr } {
//		if (s == nullptr) {
//			str = new char[1];
//			*str = '\0';
//		}
//		else {
//			str = new char[std::strlen(s) + 1];
//			std::strcpy(str, s);
//		}
//	}
//
///*Copy constructor*/
//Mystring2::Mystring2(const Mystring2& source)
//	: str{ nullptr } {
//	str = new char[std::strlen(source.str) + 1];
//	std::strcpy(str, source.str);
//}
//
///*Destructor*/
//Mystring2::~Mystring2() {
//	delete[] str;
//}
//
///*Copy assignmnet*/
//Mystring2& Mystring2::operator=(const Mystring2& rhs) {
//	std::cout << "Copy assignment" << std::endl;
//	if (this == &rhs)
//		return *this;
//	delete[] this->str;
//	str = new char[std::strlen(rhs.str) + 1];
//	std::strcpy(this->str, rhs.str);
//	return *this;
//}
//
//
///*Display method*/
//void Mystring2::display() const {
//	std::cout << str << " : " << get_length() << std::endl;
//}
//
///*getters*/
//int Mystring2::get_length() const { return strlen(str); }
//const char* Mystring2::get_str() const { return str; }