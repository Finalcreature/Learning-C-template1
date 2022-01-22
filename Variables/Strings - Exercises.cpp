//# include <iostream>
//# include <string>
//
//using namespace std;
//
/********************************************String exercises***********************************************/

//int main() {
//
/********************************************Challenge 1***********************************************/
//	 //  	string unformatted_full_name{ "StephenHawking" };
//		//string first_name{ unformatted_full_name, 0, 7};
//		//string last_name = unformatted_full_name.substr(7, 7);
//		//cout << first_name << endl << last_name << endl;
//		//string formatted_full_name{};
//		//formatted_full_name = first_name + last_name;
//		//cout << formatted_full_name << endl;
//		//formatted_full_name.insert(7, " ");
//		//cout << formatted_full_name;
//
//		//string journal_entry_1{ "Isaac Newton" };
//		//string journal_entry_2{ "Leibniz" };
//
//		//journal_entry_1 = journal_entry_1.erase(0, 6);
//		//cout << journal_entry_1 << endl;
//
//		//if (journal_entry_1 > journal_entry_2)
//		//journal_entry_1.swap(journal_entry_2);
//
//		//cout << journal_entry_1;
//
/**************************************Challenge 2*************************************************/
//
//	string alphabet{ " abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ" };
//	string key{ "_XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr" };
//	string secret_message{};
//	cout << "Enter your secret message: ";
//
//	getline(cin, secret_message);
//
//	string encrypted_message{};
//
//	cout << "\nEncrypting message..." << endl;
//
//	for (char c : secret_message)
//	{
//		size_t position = alphabet.find(c);
//		if (position != string::npos)
//		{
//			char new_char{ key.at(position) };
//			encrypted_message += new_char;
//		}
//		else {
//			encrypted_message += c;
//		}
//
//	}
//	cout << "\nEncrypyed message: " << encrypted_message << endl;
//
//	string decrypted_message{};
//
//	cout << "\nDecrypting message..." << endl;
//
//	for (char c : encrypted_message)
//	{
//		size_t position = key.find(c);
//		if (position != string::npos)
//		{
//			char new_char{ alphabet.at(position) };
//			decrypted_message += new_char;
//		}
//		else {
//			decrypted_message += c;
//		}
//	}
//	cout << "\nDecrypted message: " << decrypted_message << endl;
//	
//		return 0;
//	}



				
			//*************************************Unreal engine only*********************************


			//string HiddenWord = "cakes";
			//string input{};

			//cout << "Write a word" << endl;
			//cin >> input;
			//int index = 0, comparison = index + 1;

			//for (index = 0; index < input.length(); index++)
			//{
			//	for (comparison = index + 1; comparison < input.length(); comparison++)

			//	{
			//		if (input[index] == input[comparison])
			//			cout << "not an isogram";
			//	}

			//}


			//if (input[index] == input[comparison])
			//{
			//	cout << "This is not an isogram" << endl;
			//}

			//else
			//{
			//	cout << "This is an isogram";
			//}



			//string input{};

			//cout << "Please write one word: ";
			//cin >> input;
			//string message{};
			//string storing{};
			//for (int i = 0; i < input.length(); i++)
			//{
			//	cout << storing << input.at(i) << endl;
			//	storing += input.at(i);

			//}