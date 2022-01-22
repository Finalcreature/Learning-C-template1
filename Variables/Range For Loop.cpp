//#include <iostream>
//#include <vector>
//#include <iomanip>
//using namespace std;
//
//
///***************************************************************************Range for loop****************************************************************************/
//
//int main() {
//	
//	cout << "-------------------------------------------Go through an array------------------------------------" << endl;
//	int scores[]{ 10, 20, 30 };
//	
//	for (auto score : scores) cout << score << endl;
//	
//	cout << "-------------------------------------------Go through a vector------------------------------------" << endl;
//	vector <double> tempratures{ 87.9, 77.9, 80.0, 72.5 };
//	double average_temp{};
//	double total{};
//	
//	for (auto temp : tempratures) total += temp;
//	
//	if (tempratures.size() != 0) average_temp = total / tempratures.size();
//	
//	cout << fixed << setprecision(1);
//	cout << "Average temprature is: " << average_temp << endl;
//	
//	cout << "-------------------------------------------Go through a array------------------------------------" << endl;
//	for (auto val : { 1,2,3,4,5 }) 	cout << val << endl;
//	
//	cout << "-------------------------------------------Go through each letter of a string------------------------------------" << endl;
//	for (auto c : "This is a test")	if (c != ' ') cout << c;
//	cout << endl;
//
//	cout << "---------Go through each letter of a string an go down a row with each letter------------------------------------" << endl;
//	for (auto c : "This is a test")	if (c == ' ')	cout << "\n";
//	else cout << c;
//
//	cout << endl;
//	return 0;
//}