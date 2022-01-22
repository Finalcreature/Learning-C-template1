//#include <iostream>
//#include <string>
//
//using namespace std;
//
///*FP*/
//string isequal(string*&, string&);
//
///*FD*/
//
//string isequal(string* &ptr1, string& a) {
//
//	cout << "ptr1: " << *ptr1 << " " << ptr1 << " and  a:"  << a << " " << &a;
//
//	if (*ptr1 == a && ptr1 == &a) return "Both address and content are equal";
//	else if (*ptr1 == a || ptr1 == &a) return "Either the address or the content are equal";
//	else return "Are not equal";
//
//	
//}
//
//int set_number(int x) {
//	return x * 2;
//}
//
//
//	 
//
//int main() {
//	int num{};
//	cin >> num;
//	int new_num = set_number(num);
//	cout << new_num;
//
//	string name{};
//	string name2{ "Frank" };
//	string name3{ "Kate" };
//
//	cout << "Please enter your name: ";
//		getline(cin, name);
//		
//		cout << "Name: " << name << endl << "Address: " << &name << endl;
//
//		string* name_ptr{ nullptr };
//		//cout << "name_ptr first initial: " << name_ptr << endl;
//
//		name_ptr = &name;
//		cout << boolalpha;
//		cout << "name_ptr address: " << name_ptr << " and name address: " << &name << endl; 
//		
//		cout << "The content of name_ptr and name is equal: ";
//		if (*name_ptr == name) cout << "true" << endl;
//		else cout << "false" << endl;
//
//		cout << "The addresses of name_ptr and name are equal: ";
//		if (name_ptr == &name) cout << "true" << endl;
//		else cout << "false" << endl;
//
//
//		cout << "name_ptr: " << *name_ptr << " and " << name << endl;
//
//		string equality_result{};
//
//		cout << "\nEquality test 1: ";
//		equality_result = isequal(name_ptr, name);
//		cout << "\n" << equality_result << endl;;
//
//			cout << "\nEquality test 2: ";
//			equality_result = isequal(name_ptr, name2);
//			cout << "\n" << equality_result << endl;
//
//			cout << "\nEquality test 3: ";
//			equality_result = isequal(name_ptr, name3);
//			cout << "\n" << equality_result << endl;
//
//			size_t size{};
//			cout << "Choose size of the array: ";
//			cin >> size;
//			string *names_array{nullptr);
//
//			
//
//	cout << endl;
//	return 0;
//}