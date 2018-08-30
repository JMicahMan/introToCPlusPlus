#include <iostream>
#include <string>

int main()
{
	int b = 100;
	int c = 1;
	int a = rand() % b + c;
	char d;
	bool e;
	char f;
	std::cout <<"think of a number between 1 - 100 ima try to guess it"<<std::endl;
	{
		std::cout << "ready (y/n)"<<std::endl;
		std::cin >> f;
		if (f == 'y')
		{
			std::cout << "is this your number   "<<a<<std::endl;
			std::cout << "is it high, low or true?"<<std::endl;
			std::cin >> d;
			if (d == 'high')
			{
				b = a - 1;
				a;
				e = false;
			}
			else if (d == 'low')
			
			{
				c = a + 1;
				a;
				e = false;
			}

			else
			{
				std::cout << "i guessed it";
				e = true;
			}
		}
		else
		{

		}
	}

	system("pause");
	return (0);
}