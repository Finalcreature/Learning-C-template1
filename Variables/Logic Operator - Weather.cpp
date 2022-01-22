//#include <iostream>
//using namespace std;
//
/*****************************************************************Logic Operator - Weather***************************************************/
//
//int main() {
//
//	cout << boolalpha;
//	
//	bool WearCoat{ false };
//	double Temprature{};
//	int WindSpeed{};
//	
//	const int WindSpeedForCoat{ 25 };
//	const double TempratureForCoat{ 45 };
//	
//	cout << "Enter the current temprature in (F): ";
//	cin >> Temprature;
//	cout << "Enter windspeed in (mph): ";
//	cin >> WindSpeed;
//	
//	WearCoat = (Temprature < TempratureForCoat || WindSpeed > WindSpeedForCoat); //True if the temprature is lower than 45 or the windspeed is greater than 25
//	cout << "Do you need to wear a coat using OR? " << WearCoat << endl;
//	
//	WearCoat = (Temprature < TempratureForCoat && WindSpeed > WindSpeedForCoat); //True if the temprature is lower than 45 and the windspeed is greater than 25
//	cout << "Do you need to wear a coat using AND? " << WearCoat << endl;
//
//	cout << endl;
//	return 0;
//}