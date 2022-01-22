//#include <iostream>
//using namespace std;
//
//
///**********************************************************For Loop*****************************************************************************/
//
//int main() {
//
//	cout << "-------------------------Count from 1 to 10----------------------------" << endl;
//	for (int i{ 1 }; i <= 10; ++i)	cout << i << endl;
//
//	cout << "-------------------------Count from 1 to 10 (jumps of 2)----------------------------" << endl;
//	for (int i{ 1 }; i <= 10; i+=2)	cout << i << endl;
//
//	cout << "-------------------------Count down from 10 till Blastoff----------------------------" << endl;
//	for (int i{ 10 }; i > 0; --i) cout << i << endl;
//	cout << "Blastoff!" << endl;
//
//	cout << "-------------------------Count from 1 to 100 (jumps of numbers that divide by 15)----------------------------" << endl;
//	for (int i{ 10 }; i <= 100; i += 10) if (i %15 == 0){
//		cout << i << endl;
//	}
//	cout << "-------------------------Incrementing 2 numbers and suming them up for 5 times----------------------------" << endl;
//	for (int i{ 1 }, j{ 5 }; i <= 5; ++i, ++j) cout << i << "+" << j << "=" << (i + j) << endl;
//
//	cout << "-------------------------Count from 1 to 100 every 5 numbers go down a row----------------------------" << endl;
//	for (int i{ 1 }; i <= 100; ++i) {
//		cout << i;
//		if (i % 5 == 0)
//			cout << endl;
//		else	cout << " ";
//	}
//	cout << "-------------------------Count from 1 to 100 every 10 numbers go down a row----------------------------" << endl;
//	for (int i{ 1 }; i <= 100; ++i) cout << i << ((i % 10 == 0) ? "\n": " ");
//
//	cout << endl;
//	return 0;
//}