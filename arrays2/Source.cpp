#include <iostream>

int main()
{
	//						0    1    2    3    4    5    6
	char myFirstName[] = { 'M', 'A', 'T', 'T', 'H', 'E', 'W' };
	char myFirstNumber[6];
	for (int i = 0; i <= 6; i++)
	{
		myFirstNumber[i] = myFirstName[i];
		std::cout << myFirstName[i] << std::endl;
	}

	{
		//create my array   0   1  2  3   4
		int myArray[] = { 12, 21, 8, 7, 12 };
		//iterate over the array
		//compare each value to evryother value to see if its grater or less than the other value, if grater swap
		for (int i = 0; i <= 4; i++)
		{
			for (int j = 0; j <= 4; i++)
			{
				if (myArray[i] > myArray[j])
				{
					int temp = myArray[i];
					myArray[i] = myArray[j];
					myArray[j] = temp;
				}
			}
		}

	}

	{
		//0 2 4 6 8 10 12 14 16 18
		//					0  1  2  3  4  5  6   7   8   9
		int lawaranceOfArraybia[9];
		int j = 0;
		for (int i = 0; i <= 19; i += 2)
		{
			lawaranceOfArraybia[j++] = i++;

		}
	}

	{
		int map[3][3] = { { 1, 2, 3 },
		{ 4, 5, 6 },
		{ 7,8,9 } };
		for (int i = 0; i <= 2; i++)
		{
			for (int j = 0; j <= 2; j++)
			{
				std::cout << map[j][i] << std::endl;
			}
		}
	}

	{
		//sol1
		// True
		// False 
		// True
		// False
		// True
		// True
		// True
		// False

		//sol2
		//will do at home

		//sol 3
		//
		int data[] = { 10, 9 , 8 ,7 ,6 ,5 ,4 ,3 ,2 ,1 ,0 };
		for (int i = 0; i <= 19; i ++)
		{
			for (int j = 0; j <= 19; i++)
			{
				if (data[i] > data[j])
				{
					int temp = data[i];
					data[i] = data[j];
					data[j] = temp;
				}
			}
		}

		



	}
	system("Pause");
	return 0;
}