#include <iostream>
#include <termios.h>
#include <unistd.h>

#ifndef SCREEN_H
#define SCREEN_H
namespace screen
{
  void setRawMode();
  void restoreTerminal(struct termios &oldTerm);
}

#endif