#include "input.h"

namespace input
{
  void readKeyPress()
  {
    char ch{};

    char buffer[3];

    while (ch != 'q')
    {
      ssize_t bytesRead = read(STDIN_FILENO, &buffer, 4);
      std::cout << "I: " << buffer << std::endl;

      if (bytesRead > 1)
      {
        if (isLeftBracket(buffer))
        {
          /* code */
        }
      }
    }
  }

  bool isLeftBracket(std::array<char, 3> &c)
  {
    for (auto ch : c)
    {
    }
  }

  std::string getCharType(CharType c)
  {
    switch (c)
    {
    case CharType::ESC:
      return "ESC";
      break;
    case CharType::LB:
      return "LB";
      break;

    default:
      break;
    }
  }
} // namespace input
