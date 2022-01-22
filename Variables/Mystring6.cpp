//#define _CRT_SECURE_NO_WARNINGS
//#include "Mystring6.h"
//#include <iostream>
//#include <cstring>
//
//
//// No-args constructor
//Mystring6::Mystring6()
//    : str{ nullptr } {
//    str = new char[1];
//    *str = '\0';
//}
//
//// Overloaded constructor
//Mystring6::Mystring6(const char* s)
//    : str{ nullptr } {
//    if (s == nullptr) {
//        str = new char[1];
//        *str = '\0';
//    }
//    else {
//        str = new char[std::strlen(s) + 1];
//        std::strcpy(str, s);
//    }
//}
//
//// Copy constructor
//Mystring6::Mystring6(const Mystring6& source)
//    : str{ nullptr } {
//    str = new char[std::strlen(source.str) + 1];
//    std::strcpy(str, source.str);
//    std::cout << "Copy constructor used" << std::endl;
//
//}
//
//// Move constructor
//Mystring6::Mystring6(Mystring6&& source)
//    :str(source.str) {
//    source.str = nullptr;
//}
//
//// Destructor
//Mystring6::~Mystring6() {
//    delete[] str;
//}
//
//// Copy assignment operator
//Mystring6& Mystring6::operator=(const Mystring6& rhs) {
//    std::cout << "Using copy assignment" << std::endl;
//
//    if (this == &rhs)
//        return *this;
//    delete[] str;
//    str = new char[std::strlen(rhs.str) + 1];
//    std::strcpy(str, rhs.str);
//    return *this;
//}
//
//// Move assignment operator
//Mystring6& Mystring6::operator=(Mystring6&& rhs) {
//    std::cout << "Using move assignment" << std::endl;
//    if (this == &rhs)
//        return *this;
//    delete[] str;
//    str = rhs.str;
//    rhs.str = nullptr;
//    return *this;
//}
//
///* Display method*/
//void Mystring6::display() const {
//    std::cout << str << " : " << get_length() << std::endl;
//}
//
///* length getter*/
//int Mystring6::get_length() const { return std::strlen(str); }
//
///* string getter*/
//const char* Mystring6::get_str() const { return str; }
//
///*Overloaded insertion operator*/
//std::ostream& operator<<(std::ostream& os, const Mystring6& rhs) {
//    os << rhs.get_str();
//    return os;
//}
//
///*Overload extraction operator*/
//std::istream& operator>>(std::istream& in, Mystring6& rhs) {
//    char* buff = new char[1000];
//    in >> buff;
//    rhs = Mystring6{ buff };
//    delete[]buff;
//    return in;
//}