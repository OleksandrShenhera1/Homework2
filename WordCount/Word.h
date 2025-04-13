#pragma once
#include "iostream"
#include "string"
#include "map"
#include "vector"
#include "iomanip"

std::string EnterStr();

std::vector<std::string> CountWords(std::string str);

std::map<std::string, int> MapCount(std::vector<std::string> VecStr);

void PrintMap(std::map<std::string, int> WordMap);
