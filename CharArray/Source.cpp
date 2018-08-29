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

		
	}
	system("pause");
		return 0;
}