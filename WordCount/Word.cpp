#include "Word.h"

std::string EnterStr()
{
	std::string str;
	while (true)
	{
		std::cout << "[Enter String]: "; std::getline(std::cin, str);

		if (str.length() > 0)
		{
			return str;
			break;
		}
		else std::cout << "\n[Enter String Greater That 0 Symbols]\n";

	}
}

std::vector<std::string> CountWords(std::string str)
{
	std::vector<std::string> VecStr;
	std::string word;

	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] != ' ') word += str[i];
		else
		{
			if (!word.empty())
			{
				VecStr.push_back(word);
				word.clear();
			}
		}
	}
	// Adding Last Word If Last Symbol != 'Space'
	if (!word.empty())
	{
		VecStr.push_back(word);
	}

	if (!VecStr.empty()) return VecStr;
}

std::map<std::string, int> MapCount(std::vector<std::string> VecStr)
{
	std::map<std::string, int> WordList;

	for (const auto& i : VecStr)
	{
		WordList[i]++;
	}

	return WordList;
}

void PrintMap(std::map<std::string, int> WordMap)
{
	std::cout << std::left << std::setw(15) << "[Word]" << "[Count]\n";
	std::cout << std::string(20, '-') << "\n";
	for (const auto& i : WordMap)
	{
		if (i.second > 1)
		{
			std::cout << std::setw(15) << i.first << i.second << "\n";
		}
	}
}


