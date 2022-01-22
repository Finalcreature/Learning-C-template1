//#include <iostream>
//using namespace std;
//
///*************************************************while loop**************************************************/
//
//int main() {
//
//	cout << "---------------------------------------------coutdown---------------------" << endl;
//	int num1{};
//	cout << "Enter a positive integer - start the countdown: ";
//	cin >> num1;
//	
//	while (num1 > 0) {
//		cout << num1 << endl;
//		--num1;
//	}
//	cout << "Blastoff!" << endl;
//	cout << "---------------------------------------------cout up---------------------" << endl;
//	int num{};
//	cout << "enter a positive integer to count up to: ";
//	cin >> num;
//	
//	int i{ 1 };
//	while (num >= i) {
//		cout << i << endl;
//		i++;
//	}
//	cout << "---------------------------------------------Choose a number that is less than 100---------------------" << endl;
//	int number_1{};
//	cout << "Enter an integer less than 100: ";
//	cin >> number_1;
//	
//	while (number_1 >= 100) {
//		cout << "Enter an integer less than 100: ";
//			cin >> number_1;
//	
//		}
//	cout << "Thanks" << endl;
//	
//	cout << "---------------------------------------------Choose a number between 1-5 (using bool)---------------------" << endl;
//	bool done{ false };
//	int number{};
//	
//	while (!done) {
//		cout << "Enter an integer between 1 and 5: ";
//		cin >> number;
//		if (number <= 1 || number >= 5) {
//			cout << "Out of range, try again" << endl;
//		}
//		else {
//			cout << "Thanks!" << endl;
//			done = true;
//		}
//	}
//		
//	cout << endl;
//	return 0;
//}