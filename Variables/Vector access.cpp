//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//
/********************************************************************************Vector access********************************************************************/
//
//int main() {
//
//	vector <char> vowels_1;  // empty
//	 vector <char> vowels_2(5); // initialized to zero
//
//	vector <char> vowels_3{ 'a', 'e', 'i','o','u' };
//
//	cout << vowels_3[0] << endl
//		<< vowels_3[4] << endl << endl;
//
//
//		 vector <int> TestScores_1(3); // 3 elements all initialized to zero
//		 vector <int> TestScores_2(3, 100); // 3 elements all initialized to 100
//
//		 vector <int> TestScores_3{ 100,98,89 };
//
//		 for (size_t i{0}; i < TestScores_1.size(); i++) cout << TestScores_1[i] << endl;
//
//
//		 cout << "----------------------------------------------" << endl;
//
//		 for (size_t i{ 0 }; i < TestScores_2.size(); i++) cout << TestScores_2[i] << endl;
//		 cout << "----------------------------------------------" << endl;
//		 for (size_t i{ 0 }; i < TestScores_3.size(); i++) cout << TestScores_3[i] << endl;
//
/********************************************************************************Array access example********************************************************************************/
//	
//		 cout << "---------------------------------------------------" << endl;
//	cout << "Test scores using array syntax: " << endl
//		<< TestScores_1[0] << endl
//		<< TestScores_1[1] << endl
//		<< TestScores_1[2] << endl;
//
//
/********************************************************************************Vector access and size example********************************************************************************/
//	
//	cout << "---------------------------------------------------" << endl;
//	cout << "Test scores using vector syntax: " << endl
//		<< TestScores_1.at(0) << endl
//		<< TestScores_1.at(1) << endl
//		<< TestScores_1.at(2) << endl
//		<< "There are " << TestScores_1.size() << " scores in the vector" << endl << endl;
//
//	
/********************************************************************************Update vector value	********************************************************************************/
//
//	
//	cout << "---------------------------------------------------" << endl;
//	cout  << "Enter 3 test scores: ";
//	cin >> TestScores_1.at(0)
//		>> TestScores_1.at(1) 
//		>> TestScores_1.at(2);
//		
//
//	cout << "Updated test scores: " << endl
//		<< TestScores_1.at(0) << endl
//		<< TestScores_1.at(1) << endl
//		<< TestScores_1.at(2) << endl << endl;
//
//	cout << endl;
//	return 0;
//}