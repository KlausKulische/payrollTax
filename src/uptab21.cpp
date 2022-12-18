#include "uptab21.hpp"


bool payTax(int income, int gfb){
  gfb = gfb + 100;
  if(income < gfb)
    return true;
  else
    return false;
};

int lowTax21(int income, int gfb){
  int y = (income - gfb) / 1000000;
  int x = y * 99521;
  int rw = x + 140000;
  int st = rw * y;
  return st;  
};

int midTax21(int income, int gfb){
  int y = (income - 1475300) / 1000000;
  int x = y * 20885;
  int rw = x + 239700;
  int st1 = rw * y;
  int st = st1 + 95096;
  return st;
};

int highTax(int income, int gfb){
  int st = (income * 0.42) - 913663;
  return st;
};

int maxTax(int income, int gfb){
  int st = (income * 0.45) - 1737499;
  return st;
};

int resultTax(int tax, int kztab){
  return tax * kztab;
};
