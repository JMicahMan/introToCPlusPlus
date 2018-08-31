#include <iostream>
#include <string>

int main()
{
	int max = 100;
	int min = 1;
	int comp = rand() % (max - min + 1) + min;
	char good;
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
			std::cin >> good;
			if (good = 'high')
			{
				max = comp - 1;
				comp = rand() % (max - min + 1) + min;
				std::cout << "is this your number   " << comp << std::endl;
				std::cout << "is it high, low or true?" << std::endl;
				std::cin >> good;
				truFal = false;
			}
			else if (good = 'low')

			{
				min = comp + 1;
				comp = rand() % (max - min + 1) + min;
				std::cout << "is this your number   " << comp << std::endl;
				std::cout << "is it high, low or true?" << std::endl;
				std::cin >> good;
				truFal = false;
			}

			else if (good = 'true')
			{
				std::cout << "i guessed it" << std::endl;
				truFal = true;
			}
		}
		if (good = 'n')
		{

		}
	}

	system("pause");
	return (0);
}