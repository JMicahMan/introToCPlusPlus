#include <iostream>
#include <string>


int main ()
{	
		int grade;
		grade = 10;

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


		int input = 0;

		std::cout << "input a number" << std::endl;
		std::cin >> input;

		if (input % 3 == 0)
		{
			std::cout << "fizz";
		}

		else if (input % 5 == 0)

		{
			std::cout << "buzz";
		}

		else if (input % 3 && 5 == 0)
		{
			std::cout << "fizzbuzz";
		}
		else
		{
			std::cout << input;
		}


		system("pause");
			return 0;
}