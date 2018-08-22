#include <iostream>
#include <string>


int main ()
{	
		int grade;
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
		system("pause");
			return 0;
}