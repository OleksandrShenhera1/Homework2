#include "Word.h"

int main()
{
	std::string str = EnterStr();
	std::vector<std::string> vecstr = CountWords(str);
	std::map<std::string, int> wordmap = MapCount(vecstr);
	PrintMap(wordmap);
}