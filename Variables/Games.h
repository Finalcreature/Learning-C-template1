#pragma once
#include<string>
#include<vector>
#include "Game.h"

class Games
{
private:
	std::vector <Game> games_list;

public:
	Games(); //constructor
	~Games(); //Destructor

	void display(); // display game list
	void add_game(std::string name, std::string rating, int played); // add game to list
	
	void played_again(std::string name); // increment play times
	
	void manual_add_game(); // add game with user input
	void check_rating(std::string rating); //check the rating value is valid
	void manual_played_again(); // increment play time by user input

	std::string Uppercase(std::string& rating); // Change rating to upper case
	};