//#include <iostream>
//#include <vector>
//#include "Mystring4.h"
//
//using namespace std;
//
//int main() {
//
//
//
//    cout << boolalpha << endl;
//    Mystring4 larry{ "Larry" }; // larry
//    Mystring4 moe{ "Moe" }; //Moe
//
//    Mystring4 stooge = larry;
//    larry.display();
//    moe.display();
//
//    cout << (larry == moe) << endl;             // false
//    cout << (larry == stooge) << endl;          // true
//
//    larry.display();
//    Mystring4 larry2 = -larry;
//    larry2.display();
//
//    Mystring4 stooges = larry + "Moe";   
//   // Mystring4 stooges = "Larry" + moe;           // Compiler error
//    stooges.display();                                      // LarryMoe
//
//    Mystring4 two_stooges = moe + " " + "Larry";
//    two_stooges.display();                               // Moe Larry
//    Mystring4 three_stooges = moe + " " + larry + " " + "Curly";
//    three_stooges.display();                            // Moe larry Curly             
//
//    return 0;
//}
//
