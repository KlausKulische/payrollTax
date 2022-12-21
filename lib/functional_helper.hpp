#pragma once

#include <sstream>
#include <fstream>  
#include <iostream>
#include <stdexcept>
#include <string>
#include <vector>

//static constexpr auto input;
std::string loadConfig();
int num_children(int num);
std::string children_string (int num);
std::string children_num (int num);
