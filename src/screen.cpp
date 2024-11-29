#include "screen.h"

namespace screen
{
  void setRawMode()
  {
    struct termios term;

    tcgetattr(STDIN_FILENO, &term);
    struct termios oldTerm = term;
    cfmakeraw(&term);
    tcsetattr(STDIN_FILENO, TCSANOW, &term);
  }

  void restoreTerminal(struct termios &oldTerm)
  {
    tcsetattr(STDIN_FILENO, TCSANOW, &oldTerm);
  }
}