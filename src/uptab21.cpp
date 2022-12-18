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

