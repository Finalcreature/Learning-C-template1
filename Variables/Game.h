#pragma once
#include<string>

class Game
{
private:
	std::string name;
	std::string rating;
	int played;
public:
	/*Constuctor*/
	Game(std::string name, std::string rating, int played);
	
	/*Copy cosntructor*/
	Game(const Game& source);
	
	/*Destructor*/
	~Game();

	/*Set name*/
	void set_name(std::string name) { this->name = name; }
	
	/*Get name */
	std::string get_name() const { return name; }

	/*Set rating*/
	void set_rating(std::string rating) { this-> rating = rating; }

	/*Get rating*/
	std::string get_rating() const { return rating; }


	/*Set play times*/
	void set_played(int played) { this->played = played; }

	/*Get play time*/
	int get_played() const { return played; }
	
	/*increment play times*/
	void increment_played() { ++played; }


	/*display game*/
	void display() const;
};




