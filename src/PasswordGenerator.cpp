#include "PasswordGenerator.h"

std::string PasswordGenerator::generate_password(const std::string key){
  std::string password {""};

  for(auto c : key){
    password += c +1;
  }

  return password;
};

