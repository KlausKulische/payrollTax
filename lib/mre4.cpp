#include "mre4.hpp"

const bool zvbezjIsNull(int val){
  if(val == 0)
    return true;
  if(val > 0)
    return false;
  else
    throw std::runtime_error
    ("Keine Vermessungsgrundlage fuer den Versorgungsfreibetrag");
};

