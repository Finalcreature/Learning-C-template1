//#define _CRT_SECURE_NO_WARNINGS
//#include "Mystring5.h"
//#include <iostream>
//#include <cstring>
//#include <cctype>
//
//
//// No-args constructor
//Mystring5::Mystring5()
//    : str{ nullptr } {
//    str = new char[1];
//    *str = '\0';
//}
//
//// Overloaded constructor
//Mystring5::Mystring5(const char* s)
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
//Mystring5::Mystring5(const Mystring5& source)
//    : str{ nullptr } {
//    str = new char[std::strlen(source.str) + 1];
//    std::strcpy(str, source.str);
//    std::cout << "Copy constructor used" << std::endl;
//
//}
//
//// Move constructor
//Mystring5::Mystring5(Mystring5&& source)
//    :str(source.str) {
//    source.str = nullptr;
//}
//
//// Destructor
//Mystring5::~Mystring5() {
//    delete[] str;
//}
//
//// Copy assignment operator
//Mystring5& Mystring5::operator=(const Mystring5& rhs) {
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
//Mystring5& Mystring5::operator=(Mystring5&& rhs) {
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
//void Mystring5::display() const {
//    std::cout << str << " : " << get_length() << std::endl;
//}
//
///* length getter*/
//int Mystring5::get_length() const { return std::strlen(str); }
//
///* string getter*/
//const char* Mystring5::get_str() const { return str; }
//
///*Equality*/
//bool operator==(const Mystring5& lhs, const Mystring5& rhs) {
//    return (std::strcmp(lhs.str, rhs.str) == 0);
//}
//
//
/////*Make lowercase*/
//Mystring5 operator-(const Mystring5& obj) {
//    char* buff = new char[std::strlen(obj.str) + 1];
//    std::strcpy(buff, obj.str);
//    for (size_t i = 0; i < std::strlen(buff); i++)
//        buff[i] = std::tolower(buff[i]);
//    Mystring5 temp{ buff };
//    delete[] buff;
//    return temp;
//}
//
//
//
/////*Concatentate*/
//Mystring5 operator+(const Mystring5& lhs, const Mystring5& rhs) {
//    char* buff = new char[std::strlen(lhs.str) + std::strlen(rhs.str) + 1];
//    std::strcpy(buff, lhs.str);
//    std::strcat(buff, rhs.str);
//    Mystring5 temp{ buff };
//    delete[] buff;
//    return temp;
//
//}
