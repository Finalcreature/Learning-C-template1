//# include <iostream>
//# include <cmath> //required for maths functions
//# include <cstdlib>
//# include <ctime>
//
//using namespace std;
/*******************************************Maths functions********************************************/
//int main(){
//
//double num{};
//
//	cout << "Enter a number (double): ";
//	cin >> num;
//
//	cout << "\nThe sqrt of " << num << " is: " << sqrt(num) << endl;
//	cout << "The cubed root of " << num << " is: " << cbrt(num) << endl;
//
//	cout << "The sine of " << num << " is: " << sin(num) << endl;
//	cout << "The consine of " << num << " is: " << cos(num) << endl;
//
//	cout << "The ceil of " << num << " is: " << ceil(num) << endl;
//	cout << "The floor of " << num << " is: " << floor(num) << endl;
//	cout << "The round of " << num << " is: " << round(num) << endl;
//
//	double power{};
//	cout << "\nEnter a power to raise " << num << " to: ";
//	cin >> power;
//	cout << num << " raised to the " << power << " power is : " << pow(num, power) << endl;
//
//
/*******************************************************Cube random number generator*********************************************/
//
//	int random_number{};
//	size_t count{ 10 }; //number of random numberts to generate
//	int min{ 1 }; // lower bound (inclusive)
//	int max{ 6 }; // upper bound (inclusive)
//
//	/*seed the random number generator
//	if you don't seed the generator you will get the same requence random numbers every run;*/
//
//	cout << "\nRAND_MAX on my system is: " << RAND_MAX << endl;
//	srand(time(nullptr)); // to seed
//
//	for (size_t i{ 1 }; i <= count; ++i) {
//		random_number = rand() % max + min; // generate random number [min,max]
//		cout << random_number << endl;
//	}
//		return 0;
//	}