#include <iostream>
#include <string>

#include "functional_helper.hpp"

int main(){
  std::string e{""};
  std::cout << "Lohnsteuer Programm 2022\n";
  std::cout << "Wie viele Kinder haben Sie?\n";
  std::cin >> e;
  int total_children = num_children(stoi(e));
  std::cout << "Sie haben " << children_num(total_children) << children_string(total_children) << " angegeben.\n"; 
}

