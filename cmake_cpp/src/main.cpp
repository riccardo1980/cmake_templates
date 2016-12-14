#include <iostream>
#include <stdexcept>
#include <cstdlib>

/**
  * @file main.cpp
  */

using std::cout;
using std::cerr;
using std::endl;
using std::exception;
int main(int argc, char *argv[]){
  try {

  }
  catch ( exception &e){
    cerr << "Error: " << e.what() << endl;
    return (EXIT_FAILURE);
  }
  return (EXIT_SUCCESS);
}
