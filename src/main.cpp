#include <iostream>
#include <string>

#include "InputManager.h"
#include "PasswordGenerator.h"

int main(){
  InputManager input;
  std::string key {input.get_keyphrase()};

  PasswordGenerator passwordGen;

  std::string password{passwordGen.generate_password(key)};


  std::cout << password << std::endl;

  return 0;
}
