#include <iostream>
#include "input.h"
#include "screen.h"

int main(int argc, char *argv[]) {
  struct termios oldTerm;

  screen::setRawMode();
  input::readKeyPress();
  screen::restoreTerminal(oldTerm);

  return 0;
}
