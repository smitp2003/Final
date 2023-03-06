//Smit Patel, Vedaant Patel
//Final Project: 
/**
	Game of Blackjack
	You can play with one or two players
	each player creaates a account if they don't have one and if they do they can load their existing data
	Each player and the dealer are dealt two cards, the dealers first card is face down
*/
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;

//enum types for the card suits
enum card_suit{
	S, H, D, C
};


int MIN_BET = 5; //Minimum bet is $5

//Structures
struct account{ //account structure. This will store all the player information
	string name; //The name on the account
	string email; //the email address registered to this account
	string username; //the username of this account
	string password; //pasword for the account

	int money; //in case they decide to quit playing when they come back their money will be there

	
	int wins; //games stats
	int total_played; //game stats
	double win_percentage; //game stats
};

struct card{ //how the cards are stored
	int value; //value of the card
	card_suit suit; //suit of the card we have. 
	bool up; //for the dealer since one card is face down
};

struct player{ //basis of each player in the game including the dealer
	account info; //player's account info
	vector<card> hand; //the players hand
	int bet; //how much the user is betting
	int insurance_bet; //if they take the insurance
};



int main(){
  
  
  
}
