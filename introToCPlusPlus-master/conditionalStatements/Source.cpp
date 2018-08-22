#include <iostream>
#include <string>


int main()
{
	int grade;
	//grade = 10;
	std::cout << "input student grade" << std::endl;
	std::cin >> grade;
	char gradeLetter;
	//int a;
	//int b;
	if (grade >= 90)
	{
		gradeLetter = 'a';
	}
	else if (grade >= 80 && grade < 90)
	{
		gradeLetter = 'b';
	}
	else if (grade >= 70 && grade < 80)
	{
		gradeLetter = 'c';
	}
	else if (grade >= 60 && grade < 70)
	{
		gradeLetter = 'd';
	}
	else //if (grade <= 59)
	{
		gradeLetter = 'f';
	}

	std::cout << "Student grade is  " << gradeLetter << std::endl;


	int input = 0;

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
	{
		int numb1, numb2;
		char plusMinus;

		std::cout << "enter two numbers\n";
		std::cin >> numb1 >> numb2;
		std::cout << "Do you want to add or subtract\n";
		std::cin >> plusMinus;

		switch (plusMinus)
		{

			case '+';
				std::cout << numb1 + numb2 << std::endl;
				break

					case '-';
				std::cout << numb1 - numb2 << std::endl;
				break
					default;
				std::cout << "invalid input\n";
				break
		}
	}
	//game health excercise 

	int health;
	std::cout << "enter health\n";
	std::cin >> health;
	if (health > 0)
	{
		std::cout << "You're alive\n";
	}
	else if (health > 0 && health <= 25)
	{
		std::cout << "health is critical\n";
	}
	else
	{
		std::cout << "You're dead\n";
	}

	system("pause");
	return 0;
}