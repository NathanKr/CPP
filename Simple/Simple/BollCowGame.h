#pragma once
#include <string>

enum GuessStatus {
	Ok,
	Wrong_Number_Of_Letters,
	Only_Lowercase_Letters_Allowed,
	Letter_Is_Not_Unique
};

struct BullCowCount {
	int bulls=0;
	int cows=0;
};

class BollCowGame
{
public:
	void Reset();
	size_t GetMaxTries() const;
	size_t GetCurrentTry() const;
	bool IsGameWon() const;
	GuessStatus CheckGuessValid(std::string strGuess) const;

	BullCowCount SubmitValidGuess(std::string strGuess) ;
	BollCowGame(int nMaxTries , int nWorldLength);

private:
	int m_nCurrentTry, m_nMaxTries;
	bool m_bGameWon;
	std::string m_strHiddenWord;
	void clear();
	static bool isAllLower(std::string strGuess);
	static bool isAllUnique(std::string strGuess);
	static bool isUnique(char c , std::string strGuess);
};

