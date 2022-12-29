#pragma once

#include <algorithm>
#include <fstream>
#include <iostream>
#include <sstream>
#include <stdexcept>
#include <string>
#include <vector>

extern std::vector<std::string> rawStringVec;

extern const std::string vecOutput(std::vector<std::string> &inputVec);
extern const std::string loadConfig();

std::string removeNewLine(std::string &str);
int validChild(int in);
int pickYear(int year);
int multYear(int selectedYear,int defaultYear, int row);
int validateSelectedIndex(int selectedIndex);

