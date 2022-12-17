#include "testfile.hpp"

static constexpr auto input = [](std::string const& fileName) {
  std::ifstream inputFileStream;
  inputFileStream.open(fileName);
  if(!inputFileStream.is_open()){
    std::ostringstream oStream;
    oStream << "File " << fileName << "could not opened.";
    throw std::runtime_error(oStream.str());
  }
  return inputFileStream;
};

