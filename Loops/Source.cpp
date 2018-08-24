#include <iostream>
#include <string>

int main()
{
	{
		int i = 1;
		for (int i = 0;  i <= 10; i++)
		{
			std::cout << i << std::endl;
		}

	}
	{
		char input;
		do
		{
			std::cout << "press q to exit\n";
			std::cin >> input;

		}

		while (input != 'q' && input != 'Q');
		{
			system("cls");
		}
	}
	{
		//print all even numbs 0-10 including 10
		int r = 2;
		for (int r = 0; r <= 10; r+=2)
		{
			std::cout << r << std::endl;
		}


	}

	//solution 1 
	{
		int a = 2;
		for (int a = 100; a == 0; a -= 2)
		{
			std::cout << a << std::endl;

		}

	}
	//solution 2
	{
		int input;

		std::cout << "input a number" << std::endl;
		std::cin >> input;

		if (input % 3 == 0)
		{
			std::cout << "fizz\n";
		}

		else if (input % 5 == 0)

		{
			std::cout << "buzz\n";
		}

		else if (input % 5 == 0 && input % 3 == 0)
		{
			std::cout << "fizzbuzz\n";
		}
		else
		{
			std::cout << input;
		}

	}
	{
		//solution 3
		std::cout << "will do at home\n";
	}

	{
		//solution 4
		std::cout << "will do at home\n";
	}
	system("Pause");
	return(0);
}



