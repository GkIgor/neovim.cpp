#include "input.h"

namespace input
{
  void readKeyPress()
  {
    char ch;

    while (true)
    {
      ssize_t bytesRead = read(STDIN_FILENO, &ch, 1);
      if (bytesRead == 1)
      {
        std::cout << ch << std::endl;
        if (ch == 'q')
        {
          break;
        }
      }
    }
  }
} // namespace input
