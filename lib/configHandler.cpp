//jahr,bbgrv(nein),bbgrv(ja),rvsatzan,tbsvorv,bbgkvpv,pvsatzan(nein),pvsatzan(ja),pvsatzag(nein),pvsatzag(ja),w1stkl5,w2stkl5,w3stkl5,gfb,solzfrei,zre4-zvbez,efa,zkfstkl1,zkfstkl2,zkfstkl3,zkfstkl4,gfb1,gfb2,gfb3,uptab21rw1,uptab21rw21,uptab21rw22,uptab21rw23,uptab21stmax(ja),uptab21stmax(nein),
//  

#include "../lib/configHandler.hpp"

std::vector<std::string>  rawStringVec;

int multYear(int selectedYear,int defaultYear, int row){
  return row *(selectedYear - defaultYear);
};

int pickYear(int year){
  int index {30};
  int row  {30};
  int defaultYear{2021};
  if(year == 2023)
    index = index + multYear(year,defaultYear,row);
  if(year == 2022)
    index = index + multYear(year,defaultYear,row);
  else
    index = index;
  return index;
}
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
      }
    }
  configFile.close();
};

std::string removeNewLine(std::string &str){
  str.erase(std::remove(str.begin(), str.end(), '\n'), str.cend());
  return str;
};

int validChild(int in){
  if(in < 0 || in > 7){
    return 0;
  }else{
    return in;
  }
};

