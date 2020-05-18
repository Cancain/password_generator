#include <iostream>
#include <string>

#include "InputManager.h"

int main(){
  InputManager input;
  std::string key {input.get_keyphrase()};

  std::cout << key << std::endl;

  return 0;
}
