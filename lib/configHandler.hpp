#pragma once

#include <algorithm>
#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

extern std::vector<std::string> rawStringVec;
extern std::vector<double> rawYearVec;
extern const std::string vecOutput(std::vector<std::string> &inputVec);
extern const std::string loadConfig();
std::string removeNewLine(std::string &str);

