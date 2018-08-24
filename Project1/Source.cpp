#include <iostream>
#include <string>


int main()
{
	int Switchexcercise;
	std::cout << "input 0 for grades, 1 for fizzBuzz, 2 for addition and subtraction, 3 for game health\n";
	std::cin >> Switchexcercise;
	switch (Switchexcercise)
	{
	case 0:
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
	}
	break;

	case 1:
	{int input;

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
	break;
	case 2:
	{
		{
			int numb1, numb2;
			char plusMinus;

			std::cout << "enter two numbers\n";
			std::cin >> numb1 >> numb2;
			std::cout << "Do you want to add or subtract\n";
			std::cin >> plusMinus;

			switch (plusMinus)
			{

			case '+':
				std::cout << numb1 + numb2 << std::endl;
				break;

			case '-':
				std::cout << numb1 - numb2 << std::endl;
				break;
			default:
				std::cout << "invalid input\n";
				break;
			}
		}
	}
	//game health excercise 
	break;
	case 3:
		int health;
		std::cout << "enter health\n";
		std::cin >> health;
		if (health > 0)
		{
			std::cout << "You're alive\n";
			if (health <= 25)
			{
				std::cout << "health is critical\n";
			}
		}

		else
		{
			std::cout << "You're dead\n";
		}
		break;
	}

	int homework;

	std::cout << "0 for solution 1, 1 for solution 2, 2 for solution 3, 3 for solution 4, 4 for solution 5, 5 for solution 6, 6 for solution 7, 7 for solution 8, 8 for solution 9\n";
	std::cin >> homework;

	switch (homework)
	{
	case 0: //solution 1
	{
		int y = 0;
		int x;
		if (y == 0)
		{
			x = 0;
			std::cout << x << std::endl;
		}
	}
	break;
	case 1: //solution 2
	{
		int x;
		int y;
		std::cout << "gimme two numbers\n";
		std::cin >> x;
		std::cin >> y;
		if (x > y)
		{
			std::cout << x << std::endl;
		}
		else if (x == y)
		{
			std::cout << "Don't type equal numbers\n";
		}
		else
		{
			std::cout << y << std::endl;
		}
	}
	break;
	case 2: //solution 3
	{
		std::cout << "don't understand\n";
	}
	break;
	case 3: //solution 4
	{
		int sol3;
		std::cout << "gimme a number 1-4\n";
		std::cin >> sol3;
		switch (sol3)
		{
		case 1:
		{
			std::cout << "1";
		}
		case 2:
		{
			std::cout << "2 or 3";
		}
		case 3:
		{
			std::cout << "2 or 3";
		}
		case 4:
		{
			std::cout << "4";
		}
		default:
		{
			std::cout << "Invalid";
		}
		break;
		}
		break;
	case 4: //solution 5
	{
		int x;
		int y;
		//x = (y = 0) ? y = 10 / x;
	}
	break;
	case 5: //solution 6
	{
		char input;
		float numb1, numb2;

		std::cout << "enter either a + or a - or a * or a / depending on what kinda math you want to do\n";
		std::cin >> input;

		std::cout << "gimme two numbers\n";
		std::cin >> numb1 >> numb2;

		switch (input)
		{
		case '+':
			std::cout << numb1 + numb2 << std::endl;
			break;

		case '-':
			std::cout << numb1 - numb2 << std::endl;
			break;

		case '*':
			std::cout << numb1 * numb2 << std::endl;
			break;

		case '/':
			std::cout << numb1 / numb2 << std::endl;
			break;

		default:

			std::cout << "wrong math symbol\n";
			break;
		}
		break;
	case 6: //solution 7
	{
		int a;
		//grade = 10;
		std::cout << "input month number" << std::endl;
		std::cin >> a;
		char month;
		//int a;
		//int b;
		if (a == 1)
		{
			month = '31';
		}
		else if (a == 2)
		{
			month = '28';
		}
		else if (a == 3)
		{
			month = '31';
		}
		else if (a == 4)
		{
			month = '30';
		}
		else if (a == 5)
		{
			month = '31';
		}
		else if (a == 6)
		{
			month = '30';
		}
		else if (a == 7)
		{
			month = '31';
		}
		else if (a == 8)
		{
			month = '31';
		}
		else if (a == 9)
		{
			month = '30';
		}
		else if (a == 10)
		{
			month = '31';
		}
		else if (a == 11)
		{
			month = '30';
		}
		else if (a == 12)
		{
			month = '31';
		}
		else
		{
			std::cout << "Not a month, please pick between 1 and 12\n";

		}
	}
	break;
	case 7: //solution 8
	{
		std::cout << "dont understand\n";
	}
	break;
	case 8: //solution 9
	{
		std::cout << "a. True" << std::endl;
		std::cout << "b. True" << std::endl;
		std::cout << "c. False" << std::endl;
		std::cout << "d. True" << std::endl;
		std::cout << "e. False" << std::endl;

	}
	break;
	}
	}
	system("pause");
	return 0;
	}
}
