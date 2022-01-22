//#include <iostream>
//#include <iomanip>
//
//using namespace std;
//
//int function_activation_count{ 0 };
///*FP*/
//
//double a_penny_doubled_everyday(int, double);
//
//
///*FD*/
//double a_penny_doubled_everyday(int n, double amount) {
//	++function_activation_count;
//	if (n <= 1)
//		return amount;
//	return a_penny_doubled_everyday(--n,amount*2);
//}
//
////void amount_accumulated() {
////	cout << "If I start with a penny and doubled it every day for 25 days, I will have $" << setprecision(10) << total_amount;
////}
//
//int main() {
//	double penny{ 0.01 };
//	int day{18};
//	penny = a_penny_doubled_everyday(day, penny);
//	cout << penny << endl;
//
//	cout << endl;
//	return 0;
//	}