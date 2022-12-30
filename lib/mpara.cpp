#include "mpara.hpp"

double paramPensionFundKrv(int year, int krv){
  double i;
  double p;
  if(krv == 0){
    i = std::stod(rawStringVec.at((pickYearIndex(year) + 2)));
  }else{
    i = std::stod(rawStringVec.at((pickYearIndex(year) + 1)));
  }
  i *= std::stod(rawStringVec.at((pickYearIndex(year) + 3)))
    * std::stod(rawStringVec.at((pickYearIndex(year) + 4)));
  return i;
};

const bool isKrvLessTwo (const int &krv){
  if(krv < 2 && krv >= 0)
    return true;
  else
    return false;
};

