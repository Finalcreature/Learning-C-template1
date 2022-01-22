//#include <iostream>
//# include <cstring>
//# include <cctype>
//# include <string>
//#include <sstream>
//
//
//using namespace std;
//int main()
//
//{
//	cout << boolalpha;
//	***********************************************************************
//	 calculating area circumference of circle
//	/*const float PI = 3.14159;
//	float radius;
//	double area;
//	long double circum;
//	cout << "Give radius = ";
//	cin >> radius;
//	area = PI * radius * radius;
//	circum = 2 * PI * radius;
//	cout << "Area would be = " << area << endl
//		<< "Circumference would be = " << circum << endl;*/
//
//		*********************************************************************
//
//			/*int x = 2, y = 5; bool b;
//			int n = x - y + y / x * (x * y++);
//			cout << n << endl;
//			int n1 = --x - (y + y / x);
//			cout << n1 << endl;
//			b = (n > x && n1 < y) ? true : false;
//			cout << b << endl;*/
//
//			******************************************************************
//
//				if statments
//				/*int age;
//				cout << "Enter your age: ";
//				cin >> age;
//				if (age >= 60)	cout << "Discount is 10%" << endl;
//				else if (age < 0) cout << "You lie" << endl;
//				else cout << "Discount is 5%" << endl;*/
//
//				*********************************************************
//					if else statments
//					const int MM = 50;
//					float marks;
//					float perc;
//					cout << "Enter your marks: ";
//					cin >> marks;
//					perc = (marks / MM) * 100;
//
//					if (perc >= 60) cout << "1st Division";
//					else if (perc < 60 && perc >= 45) cout << "2nd Division";
//					else if (perc < 45 && perc >= 33) cout << "3rd Division";
//					else cout << "Fail";
//					cout << endl;
//
//				***************************************************************
//						if else nested statments
//					/*char c;
//					cout << "Enter a character: ";
//						cin >> c;
//						if (c >= 48 && c <= 57) cout << "Digit";
//						else if (c >= 65 && c <= 90) cout << "Uppercase";
//						else if (c >= 97 && c <= 122) cout << "Lowercase";
//						else cout << "Other symbol";
//						cout << endl;*/
//
//						****************************************
//							Simple loop
//
//							/*int sum = 0;
//							for (int i = 1; i <=10; i++)
//							{
//								sum = sum + i;
//								cout << sum << endl;
//							}
//							cout << "Sum of numbers from 1 to 10 " << sum << endl;
//							*/
//							****************************************************************
//								 While loop
//
//								/*int sum = 0;
//									int i = 1;
//									while (i <= 10)
//									{
//										cout << i << " ";
//										sum = sum + i;
//										i++;
//									}
//									cout << "\nSum of numbers from 1 to 10 " << sum << endl;
//							*/
//							****************************************************************
//								Print till end of alphabet
//								char ch;
//								int lc;
//								cout << "Enter an alphabet ";
//								cin >> ch;
//								int n = ch;  //type conversion
//								if (n >= 65 && n <= 90) lc = 90 - n + 1;
//								else if (n >= 97 && n <= 122) lc = 122 - n + 1;
//								else
//								{
//									cout << "entry was not an alphabet";
//									return 1;
//								}
//								for (int i = 0; i < lc; i++)
//									cout << (char)n++ << " ";
//							************************************************************************
//
//							 Exit controlled loop : do-while loop
//
//								float number, sum = 0.0;
//
//								do {
//									cout << "Enter a number: ";
//									cin >> number;
//									sum += number;
//								} while (number!= 0.0);
//								cout << "\nTotal sum = " << sum << endl;
//
//							****************************************************
//								do while purpose - yes no check
//
//								int i = 1, a, t;
//								char yn;
//								do {
//									cout << "Enter Number: ";
//									cin >> a;
//									while (i <= 10)
//									{
//										t = a * i;
//										cout << t;
//										cout << "\t";
//										i++;
//									}
//									cout << endl;
//									t = 0; i = 1;
//									cout << "Want to try again y/n? ";
//									cin >> yn;
//								} while (yn == 'y' || yn == 'Y');
//
//							******************************************************
//
//							Simple switch
//
//							int d;
//							cout << "Enter the day number (1-7): ";
//							cin >> d;
//							switch (d)
//							{
//							case 1: cout << "Sunday"; break;
//									case 2: cout << "Monday"; break;
//									case 3:cout << "Tuesday"; break;
//									case 4:cout << "Wednesday"; break;
//									case 5:cout << "Thursday"; break;
//									case 6:
//									case 7:cout << "Holiday"; break;
//									default: cout << "error in input"; break;
//							}
//							************************************************************
//
//							Menu using switch
//
//							int c; float s;
//							cout << "Enter side of a square: ";
//							cin >> s;
//							cout << "1. Find Area " <<
//							"\n2. Find Perimeter " <<
//							"\n3. Find Diagonal " << endl;
//							cout << "Enter your choice :";
//							cin >> c;
//							switch (c)
//							{
//							case 1: cout << "Area = " << s * s << endl; break;
//							case 2: cout << "Perimeter = " << 4 * s << endl; break;
//							case 3: cout << "Diagonal = " << s * sqrt(2) << endl; break;
//							default: cout << "Wrong menu choice" << endl; break;
//							}
//
//							**************************************************************
//
//							 Continue and break in loops
//
//							for (int i = 1; i <= 20; i++)
//							{
//								if (i % 2 == 0) continue;
//								cout << i << " ";
//							}
//
//							*****************************************************************
//
//							 Nested loop
//
//							int cnt;
//							cout << "Give count ";
//							cin >> cnt;
//							for (int i = 1; i <= cnt; i++) //for repetition of rows
//							{
//								cout << endl;
//								for (int j = cnt; j >= i; j--) // for each char on a row
//								{
//									cout << (char) (i+64);
//								}
//							}
//
//							************************************************************
//
//							Floyd's Triangle
//
//							int cnt;
//							int k = 1;
//							cout << "Give count: ";
//							cin >> cnt;
//							for (int i = 1; i <= cnt; i++) //each row
//							{
//								for (int j = 1; j <= i; j++) //each char in row
//								{
//									cout << k << " ";
//									k++;
//								}
//								cout << endl;
//							}
//
//							*************************************************************
//							 Basic strings
//
//							char str[40];
//							cin.getline(str,40);
//							string str;
//							cout << "Input your name: ";
//							getline(cin, str);
//							cout << str << endl;
//
//
//							*****************************************************************
//
//							 String initialize and length
//
//							char s1[40] = "I love my country";
//							string s2 = "I respect my country";
//							cout << s1 << endl
//							<< s2 << endl;
//							int i;
//							for (i = 0; s1[i] != '\0'; i++);
//							
//								cout << "Length of s1 using loop " << i << endl;
//								cout << "Length of s1 using strlen " << strlen(s1) << endl;
//								cout << "Length of s2 using length " << s2.length() << endl;
//
//
//							****************************************************************
//
//							string reversal
//
//							string str;
//							cout << "Input string to be reveresed ";
//							getline(cin, str);
//							int len = str.length();
//							char temp;
//							for (int i = 0; i < len / 2; i++)
//							{
//								temp = str[i];
//								str[i] = str[len - i - 1];
//								str[len - i - 1] = temp;
//							}
//							cout << str << endl;
//
//
//							********************************************************
//
//							string addition
//
//							string s1 = "Hello ";
//							string s2 = "World ";
//							cout << s1 + s2 << endl;
//							char cs1[40] = "Be ";
//							char cs2[] = "Happy ";
//							cout << cs1 << cs2 << "Always " << endl;
//
//							*************************************************************
//
//							Array basics
//
//							int p[3];
//							p[0] = 1;
//							p[1] = 2;
//							p[2] = 3;
//							int q[3] = { 10,20,30 };
//							
//							cout << p[0] + p[1] + p[2] << endl;
//							cout << q[0] + q[1] + q[2] << endl;
//							
//							float f[3] = { 1.2, 1.3, 1.4 };
//							cout << f[0] + f[1] + f[2] << endl;
//							
//							char ch[] = "hello";
//							cout << ch[0] << endl;
//							if (ch[5] == '\0') cout << "Null confirmed" << endl;
//							string str[] = { "Jack", " and ", " Jill" };
//							cout << str[0] << str[1] << str[2] << endl;
//							
//
//							*************************************************************
//
//							Largest in array
//
//							int A[] = { 25,20,11,19,23 };
//							int max = A[0];
//							int len = sizeof(A) / 4; //implementation dependent
//							for (int i = 1; i < len; i++)
//								if (A[i] > max) max = A[i];
//							{
//								cout << "Largest number: " << max << endl;
//							}
//
//							**************************************************************
//
//							Marks in 2D Array
//
//								int M[2][3] = { { 47, 75, 80 }, { 52, 81, 76 } }; //2 students 3 subjects
//							int p = 0;
//							for (int i = 0; i < 2; i++) //for each student in a row
//							{
//								p = 0; //reset it to 0 for another student
//							
//								for (int j = 0; j < 3; j++) //for each subject in a column
//								{
//									
//									p += M[i][j];
//								}
//								cout << "% Marks of student " << i + 1 << " = " << p / 3 << endl;
//							}
//
//							********************************************************************
//							
//
//	string word{}; // word variable
//
//	cout << "Enter a sequence of characters: "; //ask user to write word
//	getline(cin, word); //input for user and store in word
//	size_t len = word.length(); // make a size_t varible that is equal to Word length
//
//	for (int i = 0; i < len; i++) // i variabel will run through according to the length of the word
//	{
//		if (word.at(i) != word.at(0))	cout << word.at(i) << word.at(i - 1) << endl;
//		else cout << word.at(0) << endl;
//	}
//	int i = 0;
//	cout << word.at(i) << endl;
//
//	string sum_word{};
//	
//	sum_word = word.at(i);
//	++i;
//	cout << sum_word << word.at(i) << sum_word;
//
//	
//	
//	
//		
//	/*	
//	cout << word.at(0) << endl;
//	cout << word.at(1-1) <<  word.at(1) << word.at(1-1) << endl;
//	cout << word.at(2 - 2) << word.at(2 - 1) << word.at(2) << word.at(2 - 1) << word.at(2 - 2) << endl;*/
//
//	/*for (char c : word)
//		cout << c << endl;
//
//	cout << word.at(0) << word.at(i+1)*/
//
//
//
// make a string variable for the Word 
// ask the user to write a word and store it in Word
// let the user input the owrd using getline()
//
// loop through each letter of the word and 
//1st loop: print 1st letter
//2nd loop: print 1st letter and second letter and then 1st letter
//
//
//
//for (char c : word)
//cout << word[c] << endl;
//
//
//
//
//return 0; 
//}
