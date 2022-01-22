//#define _CRT_SECURE_NO_WARNINGS
//#include "Mystring4.h"
//#include <iostream>
//#include <cstring>
//#include <cctype>
//
//
//// No-args constructor
//Mystring4::Mystring4()
//    : str{ nullptr } {
//    str = new char[1];
//    *str = '\0';
//}
//
//// Overloaded constructor
//Mystring4::Mystring4(const char* s)
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
//Mystring4::Mystring4(const Mystring4& source)
//    : str{ nullptr } {
//    str = new char[std::strlen(source.str) + 1];
//    std::strcpy(str, source.str);
//    std::cout << "Copy constructor used" << std::endl;
//
//}
//
//// Move constructor
//Mystring4::Mystring4(Mystring4&& source)
//    :str(source.str) {
//    source.str = nullptr;
//}
//
//// Destructor
//Mystring4::~Mystring4() {
//    delete[] str;
//}
//
//// Copy assignment operator
//Mystring4& Mystring4::operator=(const Mystring4& rhs) {
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
//Mystring4& Mystring4::operator=(Mystring4&& rhs) {
//    std::cout << "Using move assignment" << std::endl;
//    if (this == &rhs)
//        return *this;
//    delete[] str;
//    str = rhs.str;
//    rhs.str = nullptr;
//    return *this;
//}
///*Equality*/
//bool Mystring4::operator==(const Mystring4& rhs) const {
//    return (std::strcmp(str, rhs.str) == 0);
//}
//
///*Make lowercase*/
//Mystring4 Mystring4::operator-() const {
//    char* buff = new char[ std::strlen(str) + 1 ];
//    std::strcpy(buff, str);
//    for (size_t i = 0; i < std::strlen(buff); i++)
//        buff[i] = std::tolower(buff[i]);
//    Mystring4 temp{ buff };
//    delete[] buff;
//    return temp;
//
//}
//
///*Concatentate*/
//Mystring4 Mystring4::operator+(const Mystring4& rhs) const {
//    char* buff = new char[std::strlen(str) + std::strlen(rhs.str) + 1];
//    std::strcpy(buff, str);
//    std::strcat(buff, rhs.str);
//    Mystring4 temp{ buff };
//    delete[] buff;
//    return temp;
//}
//
//
///* Display method*/
//void Mystring4::display() const {
//    std::cout << str << " : " << get_length() << std::endl;
//}
//
///* length getter*/
//int Mystring4::get_length() const { return std::strlen(str); }
//
///* string getter*/
//const char* Mystring4::get_str() const { return str; }
//
//
//
//
//
//
//
