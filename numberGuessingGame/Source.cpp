#include <iostream>
#include <string>
#include <ctime>

int main()
{
	int max = 100;
	int min = 1;
	int comp = rand() % (max - min + 1) + min;
	char choice;
	bool truFal;
	char yesNo;
	std::cout << "Think of a number between 1 - 100 I will try to guess it" << std::endl;
	{
		std::cout << "ready (y/n)" << std::endl;
		std::cin >> yesNo;
		while (yesNo == 'y')
		{
			std::cout << "is this your number   " << comp << std::endl;
			std::cout << "is it high, low or true?" << std::endl;
			std::cin >> choice;
			if (choice = 'high')
			{
				max = comp - 1;
				comp = rand() % (max - min + 1) + min;
				std::cout << "is this your number   " << comp << std::endl;
				std::cout << "is it high, low or true?" << std::endl;
				std::cin >> choice;
				truFal = false;
			}
			else if (choice = 'low')

			{
				min = comp + 1;
				comp = rand() % (max - min + 1) + min;
				std::cout << "is this your number   " << comp << std::endl;
				std::cout << "is it high, low or true?" << std::endl;
				std::cin >> choice;
				truFal = false;
			}

			else if (choice = 'true')
			{
				std::cout << "i guessed it" << std::endl;
				truFal = true;
			}
		}
		if (choice = 'n')
		{
			return (0);
		}
	}

	systems("pause");
	return (0);
}