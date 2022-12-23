#pragma once

#include <cstddef>
#include <fstream>  
#include <iostream>
#include <sstream>
#include <stdexcept>
#include <string>
#include <vector>
//static constexpr auto input;
extern std::vector<std::string> stringVec;
extern const std::string vecOutput(std::vector<std::string> &inputVec);
const std::string loadConfig();
int num_children(int num);
std::string children_string (int num);
std::string children_num (int num);

