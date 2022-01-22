//#include <iostream>
//#include <vector>
//
//using namespace std;
//
///**************************************Challenge***********************/
//
//int main() {
//	
//	vector <int> nums{1,2,3,4};
//	char Selection{};
//
//
//	do {
//
//		cout << "\nP - Print numbers" << endl
//			<< "A - Add a number" << endl
//			<< "M - Display mean of the numbers" << endl
//			<< "S - Display the smallest number" << endl
//			<< "L - Display the biggest number" << endl
//			<< "Q - Quit" << endl
//			<< "\nEnter your choice: ";
//
//		cin >> Selection;
//
//
//
//		if (Selection == 'P' || Selection == 'p')
//		{
//			if (nums.size() == 0)
//			{
//				cout << "There are no numbers to display" << endl;
//			}
//			else {
//				cout << endl << "Displaying numbers: ";
//
//				for (auto AllNums : nums)
//				{
//					cout << AllNums << " ";
//				}
//			}
//		}
//
//
//		else if (Selection == 'A' || Selection == 'a')
//		{
//			int NewNumber{};
//			cout << endl << "Add a number: ";
//			cin >> NewNumber;
//			nums.push_back(NewNumber);
//			cout << NewNumber << " added" << endl;
//		}
//
//		else if (Selection == 'M' || Selection == 'm')
//		{
//			if (nums.size() == 0)
//				cout << "Unable to calculate mean - no data" << endl;
//			else {
//				double overall{};
//				for (auto cal : nums)
//					overall += cal;
//				cout << "The mean is: " << overall / nums.size() << endl;
//			}
//		}
//	
//			else if (Selection == 'S' || Selection == 's')
//			{
//				cout << endl << "Display the smallest number " << endl;
//				if (nums.size() == 0)
//					cout << "Unable to determine the smalles - list is empty" << endl;
//				else {
//					int smallest = nums.at(0);
//					for (auto small : nums)
//						if (small < smallest)
//							smallest = small;
//					cout << "The smalles number is: " << smallest << endl;
//				}
//			}
//			
//			else if (Selection == 'L' || Selection == 'l') {
//			cout << endl << "Display the largest number " << endl;
//			if (nums.size() == 0)
//				cout << "Unable to determine the largest - list is empty" << endl;
//			else {
//				int largest = nums.at(0);
//				for (auto large : nums)
//					if (large > largest)
//						largest = large;
//				cout << "The largest number is: " << largest << endl;
//			}
//		}
//			else
//		{
//			cout << "Unkown selection, type again" << endl;
//		}
//		} while (Selection != 'q' && Selection != 'Q');
//
//		cout << endl << "Goodbye " << endl;
//
//
//
//		return 0;
//
//	}