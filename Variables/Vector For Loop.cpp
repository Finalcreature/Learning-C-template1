//#include <iostream>
//#include <vector>
//
//using namespace std;
//
///*****************************************************************Vector for loop*******************************************/
//
//int main() {
//
//	cout << "-------------------------------------------Go through a vector------------------------------------" << endl;
//	
//	vector <int> nums{ 10,20,30, 40, 50 };
//	for (unsigned i{ 0 }; i < nums.size(); ++i)	cout << nums[i] << endl;
//	
//	cout << "-------------------------Calculate sum by adding even numbers 15 times----------------------------" << endl;
//	int sum{};
//	for (int i{ 1 }; i <= 15; ++i)
//		if (i % 2 != 0) {
//			sum += i;
//			cout << sum << endl;
//		}
//
///*****************************************************************Another Example*******************************************/
//
//	int num_items{};
//	
//	cout << "How many data items do you have? ";
//	cin >> num_items;
//	
//	vector <int> data{};
//	
//	for (int i{ 1 }; i <= num_items; ++i) {
//	
//		int data_item{};
//		cout << "Enter data item " << i << ": ";
//		cin >> data_item;
//		data.push_back(data_item);
//	}
//
//
//	cout << endl << "Displaying Histogram" << endl;
//	for (auto val : data) {
//		for (int i{ 1 }; i <= val; ++i) {
//			if (i % 5 == 0)
//				cout << "*";
//			else
//				cout << "-";
//			cout << "-";
//	
//		}
//		cout << endl;
//	}
//	cout << endl;
//	return 0;
//}