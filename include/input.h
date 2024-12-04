#include <unistd.h>
#include <iostream>
#include <termios.h>
#include <string>
#include <array>

#ifndef INPUT_H
#define INPUT_H

typedef enum
{
  ESC = 27,
  LB = 91
} CharType;

namespace input
{
  void readKeyPress();
  bool isLeftBracket(char[3]);
  std::string getCharType(char);
}

#endif