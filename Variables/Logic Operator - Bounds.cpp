//#include <iostream>
//using namespace std;
//
/*******************************************************************************Logical operator - Bounds*******************************************************************************/
//	
//int main() {
//
//	int num{};
//	const int lower{ 10 };
//	const int upper{ 20 };
//	
//	cout << boolalpha;
//	
//	cout << "Enter an integer - the bounds are " << lower << " and " << upper << ": ";
//	cin >> num;
//	
//	bool within_bounds{ false };
//	
//	within_bounds = (num > lower && num < upper);
//	
//	cout << num << " is between " << lower << " and " << upper << ": " << within_bounds << endl;
//
//	
//	bool outside_bounds{ false };
//	
//	outside_bounds = (num < lower || num > upper);
//
//	cout << "Enter an integer - the bounds are " << lower << " and " << upper << ": ";
//	cin >> num;
//	
//	cout << num << " is outside " << lower << " and " << upper << ": " << outside_bounds << endl;
//
//	bool on_bounds{ false };
//	
//	cout << "Enter an integer - the bounds are " << lower << " and " << upper << ": ";
//	cin >> num;
//	
//	on_bounds = (num == lower || num == upper);
//	cout << num << " is on one of the bounds which are " << lower << " and " << upper << ": " << on_bounds << endl;
//
//	cout << endl;
//	return 0;
//}