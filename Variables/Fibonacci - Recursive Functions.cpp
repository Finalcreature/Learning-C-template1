//#include <iostream>
//
///***********************************************Recursion Functions************************/
//
//using namespace std;
//
///*****************************Fibonacci Example***********************/
//
///*FP*/
//unsigned long long fibonacci(unsigned long long n);
//
///*FD*/
//unsigned long long  fibonacci(unsigned long long n) {
//	if (n <= 1)
//		return n;     // base cases
//	return fibonacci(n - 1) + fibonacci(n - 2);  //recursion
//}
//
//int main() {
//
//	cout << fibonacci(5) << endl;  //5
//	cout << fibonacci(30) << endl; //832040
//	cout << fibonacci(40) << endl; //102334155
//
//	cout << endl;
//	return 0;
//
//}