//#include "Games.h"
//#include <iostream>
//#include <string>
//
//using namespace std;
//
//
///*Games that will be added automatically*/
//void auto_add_games(Games& my_games) {
//
//my_games.add_game( "Doom", "M", 3);
//my_games.add_game("Far Cry", "T", 4);
//my_games.add_game("Spore", "PG-13", 6);
//}
//
//int main() {
//	Games my_games; //my Games class obj
//
//	bool done(true);
//	while (done == true) {
//		std::cout << "\n--------------------------------------------------" << endl << "--------------------------------------------------"
//			<< "\n\nPlease choose an option: " << endl
//			<< "1.Display Collection" << endl
//			<< "2.Add game" << endl
//			<< "3.Increase number of plays" << endl
//			<< "4.Add games automatically" << endl
//			<< "5.Quite" << endl;
//		
//		char selection{};
//		cin >> selection;
//			switch (selection)
//			{
//			case '1': my_games.display();
//				break;
//			case '2':  my_games.manual_add_game();
//				break;
//			case '3': my_games.manual_played_again();
//				break;
//			case '4': auto_add_games(my_games);
//				break;
//			case '5': done = false;
//				break;
//			default: std::cout << "Error input" << endl;
//				break;
//			}
//			
//		
//	}
//	cout << "Goodbye" << endl;
//	return 0;
//}