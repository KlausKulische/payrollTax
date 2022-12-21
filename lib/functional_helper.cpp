#include "functional_helper.hpp"

std::vector<double> config; 

std::string loadConfig() {
//  const std::string filename {"../lib/a.txt"};
//  std::cout << filename << '\n';
  std::string line {"blank "};
  std::ifstream inputFile("../lib/config.csv");
    if(!inputFile.is_open()){
      throw std::runtime_error("keine Datei geladen !");
    }else{
      while(std::getline(inputFile, line)){
        std::cout << line << '\n';
      }
      inputFile.close();
    }
};

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

