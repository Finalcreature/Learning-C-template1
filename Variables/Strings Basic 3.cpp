//# include <iostream>
//# include <string>
//
//using namespace std;
//
//
//int main() {
//
//	//***************************String lengths***************************
//
//char first_name[7]{ "Bjarne" };
//	char last_name[11]{ "Stroustrup" };
//	char full_name[17]{};
//	char temp[50]{};
//
//	size_t first_name_length = strlen(first_name); 
//	size_t last_name_length = strlen(last_name);
//
//	cout << "First name: " << first_name << endl;
//	cout << "Last name: " << last_name << endl;
//	cout << "First name length :" << first_name_length << endl; 
//	cout << "Last name length: " << last_name_length << endl;
//
//	strcpy_s(full_name, first_name);
//	strcat_s(full_name, last_name);
//
//	cout << "Full name without space: " << full_name << endl;
//
//	size_t full_name_length = strlen(full_name);
//	cout << "Full name length: " << full_name_length << endl;
//
//	string name1 = "Nadav";
//	cout << name1 << endl;
//	string InsertName;
//	cin >> InsertName;
//	cout << name1 << " " << InsertName << endl;
//	string ShortVesrse(name1, 0, 2 );
//	cout << ShortVesrse << endl; //Na
//	string Sentence = name1 + " " + InsertName + " is awesome!";
//	cout << Sentence << endl;
//	Sentence.at(0) = 'D'; //Danav
//	cout << Sentence << endl;
//	cout << Sentence.at(4) << endl; //V
//	cout << "----------------------------------" << endl;
//	for (char N : name1)
//		cout << N << endl;
//
//	if (InsertName == "Raz") //Determine if the name that was inserted is Raz
//	{
//		cout << "Great" << endl;
//	}
//	else
//	{
//		cout << "ok" << endl;
//	}
//
//	cout << Sentence.substr(0, 4) << endl; //Remove the last letter of Nadav 
//	cout << Sentence.find("awesome!") << endl; 
//	cout << Sentence.substr(13) << endl; //Remove all string besides the word awesome!
//
//	return 0;
//}