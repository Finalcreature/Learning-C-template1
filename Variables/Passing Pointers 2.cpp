//#include <iostream>
//
//using namespace std;
//
///*FP*/
//void swap(int* a, int* b);
//
///*FD*/
//
//void swap(int* a, int* b) {
//	int temp = *a; //100
//	*a = *b; //200
//	*b = temp; //100
//}
//
//int main() {
//
//	int x{ 100 }, y{ 200 };
//	cout << "\nx: " << x << endl; //100
//	cout << "y: " << y << endl; //200
//
//	swap(&x, &y);
//
//	cout << "\nx: " << x << endl; //200
//	cout << "y: " << y << endl; //100
//
//	cout << endl;
//	return 0;
//}