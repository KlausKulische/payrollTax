//#include "../lib/configHandler.hpp"
#include "../lib/functional_helper.hpp"
#include "../lib/uptab21.hpp"
#include "../lib/mre4.hpp"
#include "../lib/mpara.hpp"

int main(){

  std::string e{""};
  std::cout << "Lohnsteuer Programm 2022\n";
  std::cout << "file loader\n";
  loadConfig();
  std::cout << "Vec " << '\n';
  //vecOutput(rawStringVec);
  std::cout << "//////////////////////////////////////////////" << '\n';
 
  std::cout << "Welches Jahr wollen sie auswaehlen ?\n";
  std::cin >> e;
  int in = std::stoi(e);
  std::cout << rawStringVec.at(pickYearIndex(in)) << '\n';
  
  std::cout << "//////////////////////////////////////////////" << '\n';
  std::cout << paramPensionFundKrv(std::stoi(e),1) << '\n';
  std::cout << "//////////////////////////////////////////////" << '\n';
  std::cout << 0.84 * 0.093 * 80400 << '\n';

  std::cout << "//////////////////////////////////////////////" << '\n';
  
  std::cout << "Wie viele Kinder haben Sie?\n";
  std::cin >> e;
  int in_1 = std::stoi(e);
  int ine = validChild(in_1);
  int total_children = num_children(ine);
  std::cout << "Sie haben " << children_num(total_children)
            << children_string(total_children) << " angegeben.\n";
}

