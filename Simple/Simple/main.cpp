/*
	
	****  This file interact with the user and access BollCowGame which handles the game logic  **** 
*/

#include <iostream>
#include <string>
#include "main.h"
#include "BollCowGame.h"

using namespace std;
constexpr int MAX_GUESS_NUMBER = 2;
constexpr int WORD_LENGTH = 5;

BollCowGame bcGame(MAX_GUESS_NUMBER , WORD_LENGTH);


void PrintIntro() {
	cout << "Welcome to Bulls and Cows , a fun word game" << endl;
	cout << "can you guess the " << WORD_LENGTH << " letters word i think about ?" << endl;
}

void PrintNonValidGuessError(GuessStatus status) {
	string strErr = "";

	switch (status)
	{
	case Ok:
		// -- nothing to print
		break;

	case Wrong_Number_Of_Letters:
		strErr = "Wrong number of characters";
		break;

	case Only_Lowercase_Letters_Allowed:
		strErr = "Not all Character\\s are lower case letters";
		break;

	case Letter_Is_Not_Unique:
		strErr = "Letter\\s are not unique";
		break;

	default:
		strErr = "Unexpected error";
		break;
	}

	if (strErr.length() > 0)
	{
		cout << "Error : " << strErr << endl << endl;
	}
}

string GetGuess() {
	string guess;
	cout << "enter your guess : ";
	getline(cin, guess);
	
	return guess;
}

void PlayGame() {
	string strGuess;
	GuessStatus status;
	bcGame.Reset();
	BullCowCount count;

	while ((bcGame.GetCurrentTry() < bcGame.GetMaxTries()) && !bcGame.IsGameWon())
	{
		do {
			strGuess = GetGuess();
			status = bcGame.CheckGuessValid(strGuess);
			PrintNonValidGuessError(status);
		} while (status != GuessStatus::Ok);


		count = bcGame.SubmitValidGuess(strGuess);

		cout << "Try : " << bcGame.GetCurrentTry() << endl;
		cout << "Bulls : " << count.bulls << endl;
		cout << "Cows : " << count.cows << endl << endl;
	}

	cout << (bcGame.IsGameWon() ? "YOU WIN" : "YOU LOSE") << endl << endl;
}


bool AskToPlayAgain() {
	/* ******** NOTICE ********
		you will get trouble if you try to use << on char because it will read also enter.
		best way is to use getline and extract the first char
	*/
	string answer;
	cout << "Do you want to play again [y/n] ? " ;
	getline(cin ,answer); // better then << in case the user put space

	return (answer[0] == 'y'		);
}


int main() {
	bool bPlayAgain;

	do {
		PrintIntro();
		PlayGame();
		bPlayAgain = AskToPlayAgain();
	} while (bPlayAgain);


	return 0;
}
