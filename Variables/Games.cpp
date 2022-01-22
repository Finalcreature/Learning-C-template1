#include "Games.h"
#include <iostream>
#include <string>
#include <vector>


using namespace std;


/*Games no-args constructor*/
Games::Games(){

}

/*Movies destructor*/

Games::~Games() {

}

/*Display game list*/
void Games::display() {
	cout << "\nDisplay: ";
	if (games_list.size() != 0)
		for (Game g : games_list) { cout << g.get_name() << ", " << g.get_rating() << ", " << g.get_played() << " | "; }
	else { cout << "There are no games in your collection!"; }
	cout << endl;
}

/*Add a game to list*/
void Games::add_game(std::string name, std::string rating, int played) {
	cout << "Trying to add " << name << ": ";
	bool exist{ false };
	for (auto& g : games_list)
		if (name == g.get_name()) { exist = true; } 
		else {}
		if (exist == true) {
			cout << name << " already exist in your collection" << endl;
		}
		else {
			games_list.push_back(Game(name, rating, played));
			cout << name << " added sucssefully" << endl;
		}
}

/*Increment play times*/
void Games::played_again(string name) {
	cout << "Trying to increment " << name << " :";
	bool found{ false };
	for (auto& g : games_list)
		if (name == g.get_name()) { found = true; g.increment_played(); 	cout << name << " incremented" << endl;}
		else {}
	if (found == false) { cout <<name << " not found" << endl; }
	else {}
 }

/*Add game with user input*/
void Games::manual_add_game() {
	cout << "\n--------------------------------------------------" << endl << "--------------------------------------------------";
	string game_name{};
	string game_rating{};
	int game_played{};
	cout << "\nWhat is the name of the game? ";
	cin.ignore();
	getline(cin, game_name);
	cout << "\nWhat is the game's rating? ";
	cin >> game_rating;
	check_rating(game_rating);
	Uppercase(game_rating);
	cout << "\How many times did you play it? ";
	cin >> game_played;
	add_game(game_name, game_rating, game_played);
}

/*Check if rating is valid*/
void Games::check_rating(std::string rating) {
	bool correct{ false };
	while (correct == false)
	{
		if (rating == "E" || rating == "e" || rating == "T" || rating == "t" || rating == "PG-13" || rating == "pg-13" || rating == "M" || rating == "m") { correct = true; }
		else { cout << "Incorrect rating. Please write your rating again(E,G,PG-13,M): " << endl; cin >> rating; }
	}
	
}
/*increment play times by user input*/
void Games::manual_played_again() {
	cout << "\n--------------------------------------------------" << endl << "--------------------------------------------------";
	string game_name;
	cout << "\nWhich game would you like to increase play times? ";
	cin.ignore();
	getline(cin, game_name);
	bool found{ false };
	for (auto& g : games_list)
		if (game_name == g.get_name()) { found = true; g.increment_played(); 	cout << "\n" << game_name << " amount of play has changed from " << g.get_played() -1 << " to " << g.get_played() << endl; }

	
	if (found == false) { cout << "\n" << game_name << " not found" << endl; }
}

/*Rating value to uppercase*/
std::string Games::Uppercase(string& rating) {
	if (islower(rating[0])) {
		for (auto& c : rating)
			c = toupper(c);
		return rating;
	}
	else {  return rating; }
	
}