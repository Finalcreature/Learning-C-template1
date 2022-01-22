//#include <iostream>
//#include <string>
//#include <vector>
//
//using namespace std;
//
//int main() {
//
//	int num{ 100 };
//	int& ref{ num };
//
//	cout << num << endl;
//	cout << ref << endl;
//
//	num = 200;
//	cout << "\n----------------------" << endl;
//	cout << num << endl;
//	cout << ref << endl;
//
//	ref = 300;
//	cout << "\n----------------------" << endl;
//	cout << num << endl;
//	cout << ref << endl;
//
//
//
//	cout << "\n----------------------" << endl;
//	vector <string> stooges{ "Larry", "Moe" , "Curley" };
//
//	for (auto str : stooges)
//		str = "Funny"; //str is a COPY of the each vector element
//
//	for (auto str : stooges) //no change
//		cout << str << endl;
//
//	cout << "\n--------------------------------------" << endl;
//	for (auto& str : stooges) //str is a reference to each vector element
//		str = "Funny";
//
//	for (auto const& str : stooges) //notice we are using const
//		cout << str << endl;
//
//
//
//	cout << endl;
//	return 0;
//}