//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//#include <cstring>
//#include "Mystring3.h"
//
///* No-args constructor*/
//Mystring3::Mystring3()
//    : str{ nullptr } {
//    str = new char[1];
//    *str = '\0';
//}
//
///* Overloaded constructor*/
//Mystring3::Mystring3(const char* s)
//    : str{ nullptr } {
//    if (s == nullptr) {
//        str = new char[1];
//        *str = '\0';
//    }
//    else {
//        str = new char[strlen(s) + 1];
//        strcpy(str, s);
//    }
//}
//
///* Copy constructor*/
//Mystring3::Mystring3(const Mystring3& source)
//    : str{ nullptr } {
//    str = new char[strlen(source.str) + 1];
//    strcpy(str, source.str);
//    std::cout << "Copy constructor used" << std::endl;
//
//}
//
///* Move constructor*/
//Mystring3::Mystring3(Mystring3&& source)
//    :str(source.str) {
//    source.str = nullptr;
//    std::cout << "Move constructor used" << std::endl;
//}
//
///* Destructor*/
//Mystring3::~Mystring3() {
//    if (str == nullptr) {
//        std::cout << "Calling destructor for Mystring : nullptr" << std::endl;
//    }
//    else {
//        std::cout << "Calling destructor for Mystring : " << str << std::endl;
//    }
//    delete[] str;
//}
//
///* Copy assignment*/
//Mystring3& Mystring3::operator=(const Mystring3& rhs) {
//    std::cout << "Using copy assignment" << std::endl;
//
//    if (this == &rhs)
//        return *this;
//    delete[] str;
//    str = new char[strlen(rhs.str) + 1];
//    strcpy(str, rhs.str);
//    return *this;
//}
//
///* Move assignment*/
//Mystring3& Mystring3::operator=(Mystring3&& rhs) {
//    std::cout << "Using move assignment" << std::endl;
//    if (this == &rhs)
//        return *this;
//    delete[] str;
//    str = rhs.str;
//    rhs.str = nullptr;
//    return *this;
//}
//
//
///* Display method*/
//void Mystring3::display() const {
//    std::cout << str << " : " << get_length() << std::endl;
//}
//
///*getters*/
//int Mystring3::get_length() const { return strlen(str); }
//const char* Mystring3::get_str() const { return str; }
