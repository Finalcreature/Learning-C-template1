//#include <iostream>
//using namespace std;
//
/*******************************************************************************Pennies exercise***************************************/
//
//int main(){
//
//cout << boolalpha;
//
//int Penny{ 0 };
//const int Pound{ 100 } ;
//const int Half { 50 };
//const int Fifth{ 20 };
//const int Twentieth{ 5 };
//const int Pennies{ 1 };
//
//
//
//cout << "enter an amount in pennies: ";
//cin >> Penny;
//
////Show how many of each currency gets inside the amount of pennies
//cout << "You can use: " << Penny / Pound << " Pounds" << endl
//<< "You can use: " << Penny / Half << " Halves" << endl;
//cout << "You can use: " << Penny / Fifth << " Fifths " << endl
//<< "You can use: " << Penny / Twentieth << " Twentieths" << endl
//<< "You can use: " << Penny / Pennies << " pennies" << endl;
//
//
//
//bool CentInDollar{ false };
//
//CentInDollar = Penny >= Pound;
//
//cout << CentInDollar << endl;
//
//
//
//const int Twenty_Value{ 2000 };
//const int Ten_Value{ 1000 };
//const int Five_Value{ 500 };
//const int Pound_Value{ 100 };
//const int Half_Value{ 50 };
//const int Fifth_Value { 20 };
//const int Tens_Value{ 10 };
//const int Penny_Value{ 1 };
//
//int Change_Amount{};
//
//
//
//cout << "enter an amount in pennies: ";
//cin >> Change_Amount;
//
//
//int Twenty{}, Ten{}, Five{}, Pounds{}, Halfs{}, Fifths{}, Tens{}, Balance{};
////
//Twenty = Change_Amount / Twenty_Value;
//Balance = Change_Amount - (Twenty * Twenty_Value);
//
//cout << "Twenties: " << Twenty << endl;
//
//Ten = Balance / Ten_Value;
//Balance -= Ten * Ten_Value;
//
//cout << "Tens: " << Ten << endl;
//
//Five = Balance / Five_Value;
//Balance -= Five * Five_Value;
//
//cout << "Fives: " << Five << endl;
//
//Pounds = Balance / Pound_Value;
//Balance -= Pounds * Pound_Value;
//
//
//cout << "Pounds: " << Pounds << endl;
//
//Halfs = Balance / Half_Value;
//Balance -= Halfs * Half_Value;
//
//cout << "Halfs: " << Halfs << endl;
//
//Fifths = Balance / Fifth_Value;
//Balance -= Fifths * Fifth_Value;
//
//cout << "Fifths: " << Fifths << endl;
//
//Tens = Balance / Tens_Value;
//Balance -= Tens * Tens_Value;
//
//cout << "Tens: " << Tens << endl;
//
//Penny = Balance;
//
//cout << "Pennies: " << Balance << endl;
//
//
//	cout << endl;
//	return 0;
//}