//jahr,bbgrv(nein),bbgrv(ja),rvsatzan,tbsvorv,bbgkvpv,pvsatzan(nein),pvsatzan(ja),pvsatzag(nein),pvsatzag(ja),w1stkl5,w2stkl5,w3stkl5,gfb,solzfrei,zre4-zvbez,efa,zkfstkl1,zkfstkl2,zkfstkl3,zkfstkl4,gfb1,gfb2,gfb3,uptab21rw1,uptab21rw21,uptab21rw22,uptab21rw23,uptab21stmax(ja),uptab21stmax(nein),
//  

#include "../lib/configHandler.hpp"

std::vector<double>       rawYearVec;
std::vector<std::string>  rawStringVec;

const std::string vecOutput(std::vector<std::string> &inputVec){
  for(size_t i = 0; i < inputVec.size(); ++i){
    std::cout << i << '\t' << inputVec.at(i) << '\n';
  }
};

const std::string loadConfig() {
  std::string line {"blank"};
  std::ifstream configFile("../lib/config.csv");
    if(!configFile.is_open()){
      throw std::runtime_error("no config file found! ");
    }else{
      while(std::getline(configFile, line, ',')){
        rawStringVec.push_back(removeNewLine(line));
        // std::cout << line << '\n';
      }
#include <algorithm>
    }
  configFile.close();
};

std::string removeNewLine(std::string &str){
  str.erase(std::remove(str.begin(), str.end(), '\n'), str.cend());
  return str;
};

