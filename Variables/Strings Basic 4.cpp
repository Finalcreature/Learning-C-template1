//# include <iostream>
//# include <string>
//
//using namespace std;
//
/********************************************String operations***********************************************/

//int main() {
//	
//
//	string s0{},
//	s1{ "Apple" },
//	s2{ "Banana" },
//	s3{ "Kiwi" },
//	s4{ "apple" },
//	s5{ s1 }, //Apple
//	s6{ s1,0,3 }, //App
//	s7(10, 'X'); //XXXXXXXXXX
//
//	cout << s0 << endl; //nothing
//	cout << s0.length() << endl; //0
//
//	cout << "\nInitialization" << "\n-----------------------------------" << endl
//	<< "s1 is initialized to: " << s1 << endl
//	<< "s2 is initialized to: " << s2 << endl
//	<< "s3 is initialized to: " << s3 << endl
//	<< "s4 is initialized to: " << s4 << endl
//	<< "s5 is initialized to: " << s5 << endl
//	<< "s6 is initialized to: " << s6 << endl
//	<< "s7 is initialized to: " << s7 << endl;
//
//	cout << "\nComparison" << "\n-----------------------" << endl
//	<< s1 << " == " << s5 << ": " << (s1 == s5) << endl //1
//	<< s1 << " == " << s2 << ": " << (s1 == s2) << endl //0
//	<< s1 << " != " << s2 << ": " << (s1 != s2) << endl //1
//	<< s1 << " < " << s2 << ": " << (s1 < s2) << endl //1 
//	<< s2 << " > " << s1 << ": " << (s2 > s1) << endl //1
//	<< s4 << " < " << s5 << ": " << (s4 < s5) << endl //0
//	<< s1 << " == " << "Apple" << ": " << (s1 == "Apple") << endl; //1
//
//	cout << "\nAssignment" << "\n------------------------" << endl;
//	s1 = "Watermelon";
//	cout << "s1 is now: " << s1 << endl; // Watermelon
//	s2 = s1;
//	cout << "s2 is now: " << s2 << endl; // Watermelon
//	
//	s3 = "Frank";
//	cout << "s3 is now: " << s3 << endl;  //Frank
//	
//	s3[0] = 'C';
//	cout << "s3 change first letter to 'C': " << s3 << endl; //Crank
//	s3.at(0) = 'P';
//	cout << "s3 change first letter to 'P' " << s3 << endl; //Prank
//
//	s3 = "Watermelon";
//	cout << "\nConcatenation" << "\n------------------------" << endl;
//	
//	s3 = s5 + " and " + s2 + " Juice";
//	cout << "s3 is now " << s3 << endl; // s3 is now Apple and Watermelon Juice
//
//	cout << "\nLooping" << "\n---------------" << endl;
//	
//	s1 = "Apple";
//	for (size_t i{ 0 }; i < s1.length(); ++i)
//		cout << s1.at(i); //Apple
//	cout << endl;
//	
//	for (char c : s1)
//	cout << c;
//	cout << endl; //Apple
//
//	cout << "\nSubstring" << "\n--------------" << endl;
//	s1 = "This is a test";
//	
//	cout << s1.substr(0, 4) << endl //this
//	<< s1.substr(5, 2) << endl // is
//	<< s1.substr(10, 4) << endl; // test
//
//	cout << "\Erase" << "\n----------------" << endl;
//	
//	s1 = "This is a test";
//	s1.erase(0, 5);
//	cout << "s1 is now: " << s1 << endl; //s1 is now: is a test
//
//			cout << "\ngetline" << "\n--------------------------------" << endl;
//		
//		string full_name{};
//		
//		cout << "entter your full name: ";
//		getline(cin, full_name); //get full name
//		
//		cout << "your full name is: " << full_name << endl;
//
//
//		cout << "\nfind" << "\n-----------------------" << endl;
//		s1 = "the secret word is boo";
//		string word{};
//		
//		cout << "enter the word to find: ";
//		cin >> word; // enter a word to find
//		
//		size_t position = s1.find(word);
//		if (position != string::npos)
//		cout << "found " << word << " at position: " << position << endl; //position
//		else
//		cout << "sorry " << word << " not found." << endl;
//		
//		cout << endl;
//
//
//	return 0;
//}