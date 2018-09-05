#include <iostream>
#include <string>

int main()
{
	char name[] = "Micah";
	for (int i = 0; i < 5; i++)
	{
		std::cout << int(name[i])<<name <<std::endl;
	}
	{
		char AIEUS[] = "AIEUS";
		int count = 0;
		while (AIEUS[count] != '\0')
		{
			count++;	
		}
		std::cout << count << std::endl;
	
	}


	{
		//system("cls");
		char name1[] = "juan";
		char name2[] = "Micah";
		//bool k;
		int count = 0;
		//while (name1[count] != '\0')
		//{
		//	count++;
		//}
		//while (name2[count] != '\0')
		//{
		//	count++;
		//}
		//std::cout << count;
		for (int i = 0; 1 < 5; i++)
		{
			if (name1[i] == name2[i])
			{
				std::cout << "aaA\n";
				
			}
			else
			{
				std::cout <<  "bbB\n";
			}
			break;
		}


		//Homework

		//Solution 4
		{
			std::cout << '\a';
		}
		
		//Solution 7
		{
			//A. [+]They was tring to intialize a char [+]they didnt give it enough stuff [+] char name[5] = "John"
			//B. [+]They was tring to print name [+]they didnt give a name to print [+] char name[32] = "ColdSteelTheHedgehegKevineSucks"
			//C. [+]They was trying to connect both they names [+]they gave kunth a 7 instead 6 [+] char name[7] = "Donald"; 			char surname[7] = "Knuth";strcat(name, surname);
		}
		//Solution 13
		{
			char dd;
			char mm;
			char yyyy;
			std::cout << "input dd\n";
			std::cin >> dd;
			std::cout << "input mm\n";
			std::cin >> mm;
			std::cout << "input yyyy\n";
			std::cin >> yyyy;

			if (dd > 31 || mm > 12)
			{
				std::cout << "Invalid"<<std::endl;
			}

			

			else if (mm == 1 || mm == 01)
			{
				mm = 'Jan';
			}

			else if (mm == 2 || mm == 02)
			{
				mm = 'Feb';
			}
			else if (mm == 3 || mm == 03)
			{
				mm = 'Mar';
			}
			else if (mm == 4 || mm == 04)
			{
				mm = 'Apr';
			}
			else if (mm == 5 || mm == 05)
			{
				mm = 'May';
			}
			else if (mm == 6 || mm == 06)
			{
				mm = 'June';
			}
			else if (mm == 7 || mm == 07)
			{
				mm = 'July';
			}
			else if (mm == 8 || mm == '08')
			{
				mm = 'Aug';
			}
			else if (mm == 9 || mm == '09')
			{
				mm = 'Sept';
			}
			else if (mm == 10)
			{
				mm = 'Oct';
			}
			else if (mm == 11)
			{
				mm = 'Nov';
			}
			else
			{
				mm = 'Dec';
			}
		std::cout << dd << "/" << mm << "/" << yyyy << std::endl;

		}

	}
	system("pause");
		return 0;
}