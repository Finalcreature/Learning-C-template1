//#include <iostream>
//#include <vector>
//#include "Mystring2.h"
//
//using namespace std;
//
//int main() {
//	Mystring2 a{ "Hello" }; //ovreloaded constructor
//	Mystring2 b; // no-args constructor
//	b = a; //copy assignment
//		   //b.operator=(a)
//	b = "This is a test"; //b.operator=("This is a test")

//	Mystring2 empty; //no-args constructor
//	Mystring2 larry{ "Larry" }; //overloaded constructor
//	Mystring2 stooge{ larry }; //copy constructor
//	Mystring2 stooges;
//
//	empty = stooge; //copy assignment operator
//
//	empty.display(); //Larry: 5
//	larry.display(); //Larry: 5
//	stooge.display(); //Larry: 5
//	empty.display(); //Larry: 5
//
//	stooges = "Larry, Moe and Curly";
//	stooges.display(); //Larry,Moe and Curly: 20
//
//	vector<Mystring2> stooges_vec;
//	stooges_vec.push_back("Larry");
//	stooges_vec.push_back("Moe");
//	stooges_vec.push_back("Curly");
//
//	cout << "=== Loop 1 ==================" << endl;
//	for (const Mystring2& s : stooges_vec)
//		s.display();		/*Larry
//							Moe
//							Curly*/
//	cout << "=== Loop 2 ==================" << endl;
//	for (Mystring2& s : stooges_vec)
//		s = "changed"; //copy assignment
//
//	cout << "=== Loop 3 ==================" << endl;
//	for (const Mystring2& s : stooges_vec)
//		s.display();       /*changed
//						   changed
//						   changed*/
//						
//	return 0;
//}

