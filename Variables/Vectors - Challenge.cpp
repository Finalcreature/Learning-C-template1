//#include <iostream>
//#include <vector>
//
//using namespace std;
//
/********************************************************************************Challenge section 7********************************************************************************/
//
//int main() {
//
//	vector <int> vector1;
//	vector <int> vector2;
//
//	int AddtoVector1{ 10 };
//	
//	vector1.push_back(AddtoVector1); 
//	vector1.push_back(AddtoVector1 + 10);
//	// could have used vector1.push_back(10) and vector1.push_back(20)
//
//	cout << "Setting 10 and 20 to vector1 and showing it's size:" << endl
//		 << vector1.at(0) << endl
//		 << vector1.at(1) << endl
//		 << vector1.size() << endl;
//
//	int AddtoVector2{ 100 };
//	
//	vector2.push_back(AddtoVector2);
//	vector2.push_back(AddtoVector2 + 100);
//	// could have used vector2.push_back(100) and vector1.push_back(200)
//
//	cout << "\nSetting 100 and 200 to vector2 and showing it's size:" << endl
//		 << vector2.at(0) << endl
//		 << vector2.at(1) << endl
//		 << vector2.size() << endl;
//		
//	vector <vector<int>> vector2d;
//
//	vector2d.push_back(vector1);
//	vector2d.push_back(vector2);
//
//	cout << "\nAssigning vector1 and vector2 to vector2d: " << endl
//		<< vector2d.at(0).at(0) << endl
//		<< vector2d.at(0).at(1) << endl
//		<< vector2d.at(1).at(0) << endl
//		<< vector2d.at(1).at(1) << endl;
//
//	vector1.at(0) = 1000;
//	vector2d.at(0).at(0) = 1000;
//	cout << "\n" << vector2d.at(0).at(0) << endl;
//	cout << vector1.at(0) << endl;
//	
//	/* When I changed only the vector1.at(0) = 1000; it made a copy of the first vector but it didn't replace the one that was pushe_back into the vector2d that why I had 
//	 to make another change by setting vector2d.at(0).at(0) to the same value*/
//
//		return 0;
// }