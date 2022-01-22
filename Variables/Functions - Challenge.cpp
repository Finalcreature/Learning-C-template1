//#include <iostream>
//#include <vector>
//
//
//using namespace std;
//
///**************************************Challenge***********************/
//
///*FP for displaying the menu and getting user selection*/
//void display_menu(vector <int>);
//char get_selection();
//
///*FP Menu handling*/
//void print_numbers(const vector <int>);
//void add_number(vector <int>& );
//void mean_number(vector <int>);
//void smallest(vector <int>);
//void largest(vector <int>);
//void find_number(const vector <int>& );
//void quit();
//void unknown();
//
///*FP that work wiht the list*/
//
//bool find(const vector <int>& nums, int target);
//
//
///*FD*/
//
//void print_numbers(const vector <int> nums) {
//
//	if (nums.size() == 0)	cout << "There are no numbers to display" << endl;
//
//	else 	cout << endl << "Displaying numbers: ";
//
//		for (auto AllNums : nums)
//		{
//			cout << AllNums << " ";
//		}
//	}
//
// void add_number(vector <int>& nums) {
//	
//	int NewNumber{};
//	cout << endl << "Add a number: ";
//	cin >> NewNumber;
//	nums.push_back(NewNumber);
//	cout << NewNumber << " added" << endl;
//}
//
// void mean_number(vector <int> nums) {
//	 if (nums.size() == 0)	cout << "Unable to calculate mean - no data" << endl;
//	 else {
//		 double overall{};
//		 for (auto cal : nums) {
//			 overall += cal;
//			
//		 }
//		 cout << "The mean is: " << overall / nums.size() << endl;
//	 }
// }
//
// void smallest(vector <int> nums) {
//
//	 cout << endl << "Display the smallest number " << endl;
//	 if (nums.size() == 0)	cout << "Unable to determine the smalles - list is empty" << endl;
//	 else {
//		 int smallest = nums.at(0);
//		 for (auto small : nums)
//			 if (small < smallest)
//				 smallest = small;
//		 cout << "The smalles number is: " << smallest << endl;
//	 }
// }
//
// void largest(vector <int> nums) {
//
//	 cout << endl << "Display the largest number " << endl;
//	 if (nums.size() == 0)	cout << "Unable to determine the largest - list is empty" << endl;
//	 else {
//		 int largest = nums.at(0);
//		 for (auto large : nums)
//			 if (large > largest)
//				 largest = large;
//		 cout << "The largest number is: " << largest << endl;
//
//	 }
// }
//
// void find_number(const vector <int>& nums) {
//	 int target{};
//	 cout << "Enter the number to find: ";
//	 cin >> target;
//	 if (find(nums, target)) cout << target << " was found" << endl;
//	 else cout << target << " wasn't found" << endl;
// }
//
// void display_menu(vector <int> nums) {
//
//
//	 cout << "\nP - Print numbers" << endl
//		 << "A - Add a number" << endl
//		 << "M - Display mean of the numbers" << endl
//		 << "S - Display the smallest number" << endl
//		 << "L - Display the biggest number" << endl
//		 << "F - Find a number" << endl
//		 << "Q - Quit" << endl
//		 << "\nEnter your choice: ";
// }
//
// char get_selection(){
//		char selection{};
//		cin >> selection;
//		return toupper(selection);
// }
//
// void quit() {
//		cout << "Goodbye" << endl;
//	}
//
// void unknown() {
//		cout << "Unkown choice - choose again" << endl;
//	}
//
// bool find(const vector <int>& nums, int target) {
//		for (auto num : nums)
//			if (num == target) return true;
//		return false;
//	}
//
//
// int main() {
//	 vector <int> nums{};
//	 char Selection{};
//	 do{
//		 display_menu(nums);
//		 Selection = get_selection();
//		 switch (Selection) {
//		 case 'P':
//			 print_numbers(nums);
//			 break;
//		 case 'A':
//			 add_number(nums);
//			 break;
//		 case 'M':
//			 mean_number(nums);
//			 break;
//		 case 'S':
//			 smallest(nums);
//			 break;
//		 case 'L':
//			 largest(nums);
//			 break;
//		 case 'F':
//			 find_number(nums);
//			 break;
//		 case 'Q':
//			 quit();
//			 break;
//		 default:
//			 unknown();
//			 break;
//		 }
// } while (Selection != 'Q');
//
//		return 0;
//	}