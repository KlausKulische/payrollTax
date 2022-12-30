#include "../lib/configHandler.hpp"
#include "../lib/functional_helper.hpp"
#include "../lib/uptab21.hpp"
#include "../lib/mre4.hpp"

int main(){

  std::string e{""};
  std::cout << "Lohnsteuer Programm 2022\n";
  std::cout << "file loader\n";
  loadConfig();
  std::cout << "Vec " << '\n';
  vecOutput(rawStringVec);
  std::cout << "//////////////////////////////////////////////" << '\n';
 
  std::cout << "Welches Jahr wollen sie auswaehlen ?\n";
  std::cin >> e;
  std::cout << rawStringVec.at(pickYearIndex(std::stoi(e))) << '\n';

  std::cout << "//////////////////////////////////////////////" << '\n';
  
  std::cout << validateSelectedIndex(8) << '\n';

  std::cout << "//////////////////////////////////////////////" << '\n';
  
  std::cout << "Wie viele Kinder haben Sie?\n";
  std::cin >> e;
  int total_children = num_children(validChild(std::stoi(e)));
  std::cout << "Sie haben " << children_num(total_children)
            << children_string(total_children) << " angegeben.\n";
}

