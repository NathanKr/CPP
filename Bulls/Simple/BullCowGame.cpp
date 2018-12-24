#include "BullCowGame.h"
#include <string>


void BullCowGame::Reset()
{
	clear();
}

size_t BullCowGame::GetMaxTries() const
{
	return m_nMaxTries;
}

size_t BullCowGame::GetCurrentTry() const
{
	return m_nCurrentTry;
}

bool BullCowGame::IsGameWon() const
{
	return m_bGameWon;
}

bool BullCowGame::isAllLower(std::string strGuess) {
	bool bIsAllLOwer = true;
	for (char letter :	strGuess)
	{
		if (!((letter >= 'a') && (letter <= 'z'))) {
			bIsAllLOwer = false;
			break;
		}
	}
	return bIsAllLOwer;
}

GuessStatus BullCowGame::CheckGuessValid(std::string strGuess) const
{
	GuessStatus status = GuessStatus::Ok;

	if (strGuess.length() != m_strHiddenWord.length())
	{
		status = GuessStatus::Wrong_Number_Of_Letters;
	}
	else if (!isAllLower(strGuess)) {
		status = GuessStatus::Only_Lowercase_Letters_Allowed;
	}
	else if (!isAllUnique(strGuess)) {
		status = GuessStatus::Letter_Is_Not_Unique;
	}


	return status;
}

bool BullCowGame::isUnique(char c, std::string strGuess) {
	int nCount = 0;
	for (char letter : strGuess)
	{
		if (c == letter) {
			nCount++;
			if (nCount > 1) {
				return false;
			}
		}
	}

	return true;
}

bool BullCowGame::isAllUnique(std::string strGuess) {

	for (char letter : strGuess)
	{
		if (!isUnique(letter,strGuess)) {
			return false;
		}
	}

	return true;
}

/*
	assume input is valid so we also increment m_nCurrentTry
*/
BullCowCount BullCowGame::SubmitValidGuess(std::string strGuess) 
{
	BullCowCount count;
	m_nCurrentTry++;

	for (size_t i = 0; i < m_strHiddenWord.length(); i++)
	{
		if (m_strHiddenWord[i] == strGuess[i]) {
			count.bulls++;
		}
		else {
			size_t found = m_strHiddenWord.find(strGuess[i]);
			if ((found >= 0) && (found < m_strHiddenWord.length())) {
				count.cows++;
			}
		}
	}

	m_bGameWon = (count.bulls == m_strHiddenWord.length());

	return count;
}



BullCowGame::BullCowGame(int nMaxTries ,  int nWorldLength) : m_strHiddenWord(nWorldLength,' ')
{
	m_nMaxTries = nMaxTries;
	clear();
}

void BullCowGame::clear()
{
	// TODO make values random 
	for (size_t i = 0; i < m_strHiddenWord.length(); i++)
	{
		m_strHiddenWord[i] = (char)('a' + i);// casting is done to remove compiler warning
	}
	m_nCurrentTry = 0; // --- it is incremented in SubmitGuess
	m_bGameWon = false;
}





