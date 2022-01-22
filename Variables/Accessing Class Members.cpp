//#include <iostream>
//#include <string>
//#include <vector>
//
//using namespace std;
//
//
//class Player {
//public:
//	//attributes 
//	string name;
//	int health;
//	int xp;
//	
//	//methods
//	void talk(string text_to_say) { cout << name << " says " << text_to_say << endl; }
//	bool is_dead();
//};
//
//class Account {
//public:
//	//attributes 
//	string name;
//	double balance;
//
//	//methods
//	void deposit(double bal) { balance += bal; cout << "In deposit" << endl; }
//	void withdraw(double bal){ balance -= bal; cout << "In withdraw" << endl; }
//};
//
//
//int main() {
//
//	Account nadav_account;
//	nadav_account.name = "Nadav's account";
//	nadav_account.balance = 1000.0;
//
//	nadav_account.deposit(1000.0);
//	nadav_account.withdraw(500.0);
//
//	Player nadav;
//	nadav.name = "Nadav";
//	nadav.health = 100;
//	nadav.xp = 10;
//	nadav.talk("Hi there");
//
//	Player* enemy = new Player;
//	(*enemy).name = "Enemy";
//	(*enemy).health = 100;
//	enemy->xp = 15;
//	enemy->talk("I will destroy you!");
//	
//	
//	
//
//	cout << endl;
//	return 0;
//}