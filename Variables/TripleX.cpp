//#include <iostream>
//#include <ctime>
//using namespace std;
//
//void PrintIntroduction(int Difficulty)
//{
//	Greeting message
//			cout << "\n\nWelcome to my game Katu-Chan! " << "\nDifficulty: " << Difficulty << endl
//		<< "I prepared some extra difficult question for you to answer" << endl;
//	}
//
//bool PlayGame(int Difficulty)
//{
//	PrintIntroduction(Difficulty);
//	Declare 3 number code
//	rand(return a number between 0 - 32,767
//	const int CodeA = rand() % Difficulty + Difficulty;
//	const int CodeB = rand() % Difficulty + Difficulty;
//	const int CodeC = rand() % Difficulty + Difficulty;
//
//	const int CodeSum = CodeA + CodeB + CodeC; //17
//	const int CodeProduct = CodeA * CodeB * CodeC; //160
//
//	Print sum and product
//	cout << endl << "There are 3 numbers in the code\n" <<
//		"The code add-up to: " << CodeSum << endl
//		<< "The code multiply to give: " << CodeProduct << endl;
//
//	Store Player Guess
//	int GuessA, GuessB, GuessC;
//
//	cout << "Enter 3 numbers separeted by space: \n";
//
//	cin >> GuessA >> GuessB >> GuessC;
//
//	cout << endl << "You entered: " << GuessA << " " << GuessB << " " << GuessC << endl;
//
//	int GuessSum = GuessA + GuessB + GuessC;
//	int GuessProduct = GuessA * GuessB * GuessC;
//
//
//	cout << "The code add-up to:" << GuessSum << endl
//		<< "The code multiply to give: " << GuessProduct << endl;
//
//
//	Check if the player guess is correct
//	if (GuessSum == CodeSum && GuessProduct == CodeProduct)
//	{
//		cout << "You are the best!!!";
//		return true;
//	}
//	else
//	{
//		cout << "Awww...Try again";
//		return false;
//	}
//
//}
//
//int main()
//{
//	srand(time(NULL)); //create new random sequence based on time of day
//	const int MaxLevel = 3;
//	int LevelDifficulty = 1;
//
//	while (LevelDifficulty <= MaxLevel) // Loop game until all levels are completed
//	{ 
//		
//		bool bLevelComplete = PlayGame(LevelDifficulty);
//		cin.clear(); // Clears any errors
//		cin.ignore(); // Discards the buffer
//
//		if (bLevelComplete)
//		{
//			++LevelDifficulty;
//		}
//
//		}
//	cout << "\nYou completed the game!";
//
//
//
//
//
//#include <iostream>
//using namespace std;
//
//void PlayGame() {
//
//	cout << "Welcome Katu-Chan, to your bday game :)"
//		"\nDuring this game I will ask you multi-answers questions"
//		"\nAre you ready?" << endl;
//
//	string Answer;
//	cin >> Answer;
//	string Question1 = "First question : How many students there are at the start of Danganrumpa 2 ? \n1. 4 \n2. 16 \n3. 8 \n4. 10\n";
//	cout << Question1;
//	int Q1;
//	cin >> Q1;
//
//	while (Q1 != 2)
//	if (Q1 == 2) {
//		cout << "That was an easy one";
//	}
//	else
//	{
//		cout << Question1;
//		
//	}
//
//}
//
//int main()
//{
//
//	PlayGame();
//
//	return 0;
//}
