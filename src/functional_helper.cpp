#include "functional_helper.hpp"
#include <string>

int num_children(int num){
  return num;
};

std::string children_string (int num){
  if(num == 1)
    return " Kind";
  if(num == 0)
    return "keine Kinder";
  else
    return " Kinder";
};

std::string children_num (int num){
  if(num == 0)
    return "";
  else
    return std::to_string(num);
}

