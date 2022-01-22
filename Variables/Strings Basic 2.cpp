//# include <iostream>
//# include <string>
//
//using namespace std;

/************************Writing full name while comparing it and uppercasing it**************************/
//
//int main() {
//
//

//
//
//	char full_name[50];
//	cout << "------------------------" << endl;
//	cout << "Enter your full name: ";
//	cin.getline(full_name, 50);
//	cout << "Your full name is: " << full_name;
//
//	cout << "\n---------------------" << endl;
//
//	char temp[20];
//strcpy_s(temp, full_name);
//	if (strcmp(temp, full_name) == 0)
//		cout << temp << " and " << full_name << " are the same" << endl;
//	else
//		cout << temp << " and " << full_name << " are different" << endl;
//	
//	for (size_t i{ 0 }; i < strlen(full_name); ++i) {
//		if (isalpha(full_name[i]))
//			full_name[i] = toupper(full_name[i]);
//	}
//	cout << "Your full name is " << full_name << endl;
//	cout << "--------------------" << endl;
//
//		if (strcmp(temp, full_name) == 0)
//			cout << temp << " and " << full_name << " are the same" << endl;
//		else
//			cout << temp << " and " << full_name << " are different" << endl;
//
//		cout << "--------------" << endl;
//		cout << "Result of comparing " << temp << " and " << full_name << ": " << strcmp(temp, full_name) << endl;
//		cout << "Result of comparing " << full_name << " and " << temp << ": " << strcmp(full_name, temp) << endl;
//
//	return 0;
//}