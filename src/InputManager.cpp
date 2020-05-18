#include <iostream>
#include "InputManager.h"

using std::cin;
using std::cout;
using std::endl;

std::string InputManager::get_keyphrase(){
  std::string key {};

  cout << "Please enter a keyphrase: ";
  cin >> key;
  cout << endl;

  return key;
}

