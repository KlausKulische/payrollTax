#include "testfile.hpp"

int main(){
  test_val_selected_idx();
  test_val_selected_idx_fail();
}

int test_val_selected_idx(){
  const int idx {4};
  const int end = validateSelectedIndex(4);
  assert(idx == end);
};


int test_val_selected_idx_fail(){
  const int idx {29};
  const int end = validateSelectedIndex(29);
  assert(idx == end);
};
//static constexpr auto input = [](std::string const& fileName) {
//  std::ifstream inputFileStream;
//  inputFileStream.open(fileName);
//  if(!inputFileStream.is_open()){
//    std::ostringstream oStream;
//    oStream << "File " << fileName << "could not opened.";
//    throw std::runtime_error(oStream.str());
//  }
//  return inputFileStream;
//};

