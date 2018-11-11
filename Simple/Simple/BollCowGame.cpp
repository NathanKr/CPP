#include "BollCowGame.h"
#include <string>


void BollCowGame::Reset()
{
	clear();
}

size_t BollCowGame::GetMaxTries() const
{
	return m_nMaxTries;
}

size_t BollCowGame::GetCurrentTry() const
{
	return m_nCurrentTry;
}

bool BollCowGame::IsGameWon() const
{
	return m_bGameWon;
}

bool BollCowGame::isAllLower(std::string strGuess) {
	bool bIsAllLOwer = true;
	for (size_t i = 0; i < strGuess.length(); i++)
	{
		if (!((strGuess[i] >= 'a') && (strGuess[i] <= 'z'))) {
			bIsAllLOwer = false;
			break;
		}
	}
	return bIsAllLOwer;
}

GuessStatus BollCowGame::CheckGuessValid(std::string strGuess) const
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

bool BollCowGame::isUnique(char c, std::string strGuess) {
	int nCount = 0;
	for (size_t i = 0; i < strGuess.length(); i++)
	{
		if (c == strGuess[i]) {
			nCount++;
			if (nCount > 1) {
				return false;
			}
		}
	}

	return true;
}

bool BollCowGame::isAllUnique(std::string strGuess) {

	for (size_t i = 0; i < strGuess.length(); i++)
	{
		if (!isUnique(strGuess[i],strGuess)) {
			return false;
		}
	}

	return true;
}

/*
	assume input is valid so we also increment m_nCurrentTry
*/
BullCowCount BollCowGame::SubmitValidGuess(std::string strGuess) 
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



BollCowGame::BollCowGame(int nMaxTries ,  int nWorldLength) : m_strHiddenWord(nWorldLength,' ')
{
	m_nMaxTries = nMaxTries;
	clear();
}

void BollCowGame::clear()
{
	// TODO make values random 
	for (size_t i = 0; i < m_strHiddenWord.length(); i++)
	{
		m_strHiddenWord[i] = (char)('a' + i);// casting is done to remove compiler warning
	}
	m_nCurrentTry = 0; // --- it is incremented in SubmitGuess
	m_bGameWon = false;
}





