//Morse code
#include <iostream>
#include <Windows.h>
#include <string>

void morseSound(const char symbol)
{
	if (symbol == '.')
	{
		Beep(550, 70);
	}
	else if (symbol == '_')
	{
		Beep(550, 240);
	}
}

void convertToMorse(const char symbol)
{
	switch (symbol)
	{
	case 'a':
	case 'A':
	{
		std::cout << '.';
		morseSound('.');
		std::cout << '_';
		morseSound('_');
		break;
	}

	case 'b':
	case 'B':
	{
		std::cout << '_';
		morseSound('_');
		std::cout << '.';
		morseSound('.');
		std::cout << '.';
		morseSound('.');
		std::cout << '.';
		morseSound('.');
		break;
	}

	case 'c':
	case 'C':
	{
		std::cout << '_';
		morseSound('_');
		std::cout << '.';
		morseSound('.');
		std::cout << '_';
		morseSound('_');
		std::cout << '.';
		morseSound('.');
		break;
	}

	case 'd':
	case 'D':
	{
		std::cout << '_';
		morseSound('_');
		std::cout << '.';
		morseSound('.');
		std::cout << '.';
		morseSound('.');
		break;
	}

	case 'e':
	case 'E':
	{
		std::cout << '.';
		morseSound('.');
		break;
	}

	case 'f':
	case 'F':
	{
		std::cout << '.';
		morseSound('.');
		std::cout << '.';
		morseSound('.');
		std::cout << '_';
		morseSound('_');
		std::cout << '.';
		morseSound('.');
		break;
	}

	case 'g':
	case 'G':
	{
		std::cout << '_';
		morseSound('_');
		std::cout << '_';
		morseSound('_');
		std::cout << '.';
		morseSound('.');
		break;
	}

	case 'h':
	case 'H':
	{
		std::cout << '.';
		morseSound('.');
		std::cout << '.';
		morseSound('.');
		std::cout << '.';
		morseSound('.');
		std::cout << '.';
		morseSound('.');
		break;
	}

	case 'i':
	case 'I':
	{
		std::cout << '.';
		morseSound('.');
		std::cout << '.';
		morseSound('.');
		break;
	}

	case 'j':
	case 'J':
	{
		std::cout << '.';
		morseSound('.');
		std::cout << '_';
		morseSound('_');
		std::cout << '_';
		morseSound('_');
		std::cout << '_';
		morseSound('_');
		break;
	}

	case 'k':
	case 'K':
	{
		std::cout << '_';
		morseSound('_');
		std::cout << '.';
		morseSound('.');
		std::cout << '_';
		morseSound('_');
		break;
	}

	case 'l':
	case 'L':
	{
		std::cout << '.';
		morseSound('.');
		std::cout << '_';
		morseSound('_');
		std::cout << '.';
		morseSound('.');
		std::cout << '.';
		morseSound('.');
		break;
	}

	case 'm':
	case 'M':
	{
		std::cout << '_';
		morseSound('_');
		std::cout << '_';
		morseSound('_');
		break;
	}

	case 'n':
	case 'N':
	{
		std::cout << '_';
		morseSound('_');
		std::cout << '.';
		morseSound('.');
		break;
	}

	case 'o':
	case 'O':
	{
		std::cout << '_';
		morseSound('_');
		std::cout << '_';
		morseSound('_');
		std::cout << '_';
		morseSound('_');
		break;
	}

	case 'p':
	case 'P':
	{
		std::cout << '.';
		morseSound('.');
		std::cout << '_';
		morseSound('_');
		std::cout << '_';
		morseSound('_');
		std::cout << '.';
		morseSound('.');
		break;
	}

	case 'q':
	case 'Q':
	{
		std::cout << '_';
		morseSound('_');
		std::cout << '_';
		morseSound('_');
		std::cout << '.';
		morseSound('.');
		std::cout << '_';
		morseSound('_');
		break;
	}

	case 'r':
	case 'R':
	{
		std::cout << '.';
		morseSound('.');
		std::cout << '_';
		morseSound('_');
		std::cout << '.';
		morseSound('.');
		break;
	}

	case 's':
	case 'S':
	{
		std::cout << '.';
		morseSound('.');
		std::cout << '.';
		morseSound('.');
		std::cout << '.';
		morseSound('.');
		break;
	}

	case 't':
	case 'T':
	{
		std::cout << '_';
		morseSound('_');
		break;
	}

	case 'u':
	case 'U':
	{
		std::cout << '.';
		morseSound('.');
		std::cout << '.';
		morseSound('.');
		std::cout << '_';
		morseSound('_');
		break;
	}

	case 'v':
	case 'V':
	{
		std::cout << '.';
		morseSound('.');
		std::cout << '.';
		morseSound('.');
		std::cout << '.';
		morseSound('.');
		std::cout << '_';
		morseSound('_');
		break;
	}

	case 'w':
	case 'W':
	{
		std::cout << '.';
		morseSound('.');
		std::cout << '_';
		morseSound('_');
		std::cout << '_';
		morseSound('_');
		break;
	}

	case 'x':
	case 'X':
	{

		std::cout << '_';
		morseSound('_');
		std::cout << '.';
		morseSound('.');
		std::cout << '.';
		morseSound('.');
		std::cout << '_';
		morseSound('_');
		break;
	}

	case 'y':
	case 'Y':
	{

		std::cout << '_';
		morseSound('_');
		std::cout << '.';
		morseSound('.');
		std::cout << '_';
		morseSound('_');
		std::cout << '_';
		morseSound('_');
		break;
	}

	case 'z':
	case 'Z':
	{
		std::cout << '_';
		morseSound('_');
		std::cout << '_';
		morseSound('_');
		std::cout << '.';
		morseSound('.');
		std::cout << '.';
		morseSound('.');
		break;
	}

	case '1':
	{
		std::cout << '.';
		morseSound('.');
		std::cout << '_';
		morseSound('_');
		std::cout << '_';
		morseSound('_');
		std::cout << '_';
		morseSound('_');
		std::cout << '_';
		morseSound('_');
		break;
	}

	case '2':
	{
		std::cout << '.';
		morseSound('.');
		std::cout << '.';
		morseSound('.');
		std::cout << '_';
		morseSound('_');
		std::cout << '_';
		morseSound('_');
		std::cout << '_';
		morseSound('_');
		break;
	}

	case '3':
	{
		std::cout << '.';
		morseSound('.');
		std::cout << '.';
		morseSound('.');
		std::cout << '.';
		morseSound('.');
		std::cout << '_';
		morseSound('_');
		std::cout << '_';
		morseSound('_');
		break;
	}

	case '4':
	{
		std::cout << '.';
		morseSound('.');
		std::cout << '.';
		morseSound('.');
		std::cout << '.';
		morseSound('.');
		std::cout << '.';
		morseSound('.');
		std::cout << '_';
		morseSound('_');
		break;
	}

	case '5':
	{
		std::cout << '.';
		morseSound('.');
		std::cout << '.';
		morseSound('.');
		std::cout << '.';
		morseSound('.');
		std::cout << '.';
		morseSound('.');
		std::cout << '.';
		morseSound('.');
		break;
	}

	case '6':
	{
		std::cout << '_';
		morseSound('_');
		std::cout << '.';
		morseSound('.');
		std::cout << '.';
		morseSound('.');
		std::cout << '.';
		morseSound('.');
		std::cout << '.';
		morseSound('.');
		break;
	}

	case '7':
	{
		std::cout << '_';
		morseSound('_');
		std::cout << '_';
		morseSound('_');
		std::cout << '.';
		morseSound('.');
		std::cout << '.';
		morseSound('.');
		std::cout << '.';
		morseSound('.');
		break;
	}

	case '8':
	{
		std::cout << '_';
		morseSound('_');
		std::cout << '_';
		morseSound('_');
		std::cout << '_';
		morseSound('_');
		std::cout << '.';
		morseSound('.');
		std::cout << '.';
		morseSound('.');
		break;
	}

	case '9':
	{
		std::cout << '_';
		morseSound('_');
		std::cout << '_';
		morseSound('_');
		std::cout << '_';
		morseSound('_');
		std::cout << '_';
		morseSound('_');
		std::cout << '.';
		morseSound('.');
		break;
	}

	case '0':
	{
		std::cout << '_';
		morseSound('_');
		std::cout << '_';
		morseSound('_');
		std::cout << '_';
		morseSound('_');
		std::cout << '_';
		morseSound('_');
		std::cout << '_';
		morseSound('_');
		break;
	}

	case '?':
	{
		std::cout << '.';
		morseSound('.');
		std::cout << '.';
		morseSound('.');
		std::cout << '_';
		morseSound('_');
		std::cout << '_';
		morseSound('_');
		std::cout << '.';
		morseSound('.');
		std::cout << '.';
		morseSound('.');
		break;
	}

	case '!':
	{
		std::cout << '_';
		morseSound('_');
		std::cout << '.';
		morseSound('.');
		std::cout << '_';
		morseSound('_');
		std::cout << '.';
		morseSound('.');
		std::cout << '_';
		morseSound('_');
		std::cout << '_';
		morseSound('_');
		break;
	}

	case '.':
	{
		std::cout << '.';
		morseSound('.');
		std::cout << '_';
		morseSound('_');
		std::cout << '.';
		morseSound('.');
		std::cout << '_';
		morseSound('_');
		std::cout << '.';
		morseSound('.');
		std::cout << '_';
		morseSound('_');
		break;
	}

	case ',':
	{
		std::cout << '_';
		morseSound('_');
		std::cout << '_';
		morseSound('_');
		std::cout << '.';
		morseSound('.');
		std::cout << '.';
		morseSound('.');
		std::cout << '_';
		morseSound('_');
		std::cout << '_';
		morseSound('_');
		break;
	}

	case ';':
	{
		std::cout << '_';
		morseSound('_');
		std::cout << '.';
		morseSound('.');
		std::cout << '_';
		morseSound('_');
		std::cout << '.';
		morseSound('.');
		std::cout << '_';
		morseSound('_');
		std::cout << '.';
		morseSound('.');
		break;
	}

	case ':':
	{
		std::cout << '_';
		morseSound('_');
		std::cout << '_';
		morseSound('_');
		std::cout << '_';
		morseSound('_');
		std::cout << '.';
		morseSound('.');
		std::cout << '.';
		morseSound('.');
		std::cout << '.';
		morseSound('.');
		break;
	}

	case '+':
	{
		std::cout << '.';
		morseSound('.');
		std::cout << '_';
		morseSound('_');
		std::cout << '.';
		morseSound('.');
		std::cout << '_';
		morseSound('_');
		std::cout << '.';
		morseSound('.');
		break;
	}

	case '-':
	{
		std::cout << '_';
		morseSound('_');
		std::cout << '.';
		morseSound('.');
		std::cout << '.';
		morseSound('.');
		std::cout << '.';
		morseSound('.');
		std::cout << '.';
		morseSound('.');
		std::cout << '_';
		morseSound('_');
		break;
	}

	case '/':
	{
		std::cout << '_';
		morseSound('_');
		std::cout << '_';
		morseSound('_');
		std::cout << '.';
		morseSound('.');
		std::cout << '.';
		morseSound('.');
		std::cout << '_';
		morseSound('_');
		std::cout << '.';
		morseSound('.');
		break;
	}

	case '=':
	{
		std::cout << '_';
		morseSound('_');
		std::cout << '.';
		morseSound('.');
		std::cout << '.';
		morseSound('.');
		std::cout << '.';
		morseSound('.');
		std::cout << '_';
		morseSound('_');
		break;
	}

	default:
		std::cout << symbol;
		break;
	}
}

int main()
{
	std::cout << "Enter you message: ";
	std::string message;
	std::getline(std::cin, message);

	for (int i = 0; i < message.size(); ++i)
	{
		convertToMorse(message[i]);
		std::cout << ' ';
		Sleep(200);
	}

	return 0;
}