#pragma once

/*
	this is what i came with
	caller do PrintIntro then PlayOneGame then AskToPlayAgain in a loop
*/

class BollCowGame_MY {
public:
	void PrintIntro();
	void PlayOneGame();
	bool AskToPlayAgain();

	BollCowGame_MY(int nMaxAllowedTries);
	int GetNumberOfTries();
	int GetMaxAllowedTries();
	bool IsWin();

private:
	//string getGuess();
	int m_nMaxAllowedTries;
	int m_nNumberOfTries;

};