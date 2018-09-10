#include <iostream>
#include <ctime>
#include <string>

int print(std::string input)
{
	std::cout << input;
	return 0;
}

bool multipleOfThree(int value)
{
	if (value % 3 == 0)
		return true;
	else 
		return false;
}
//int printLetters(std::string input)
//{
//	for (int i = 0; i < input.length; i++)
//	{
//		std::cout << input[i] << std::endl;
//
//	}
//	return 0;
//}

void printNumbers()
{
	for (int i = 0; i <= 10; i++)
		std::cout << i << std::endl;
	
}

void printVals(int low, int high)
{
	for (int i = low +1; i < high; i++)
		std::cout << i << std::endl;
}

int myArray(int arr[], int size)
{
	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum += arr[i];
	
	}
	return sum;
}
void revArray(int arry[], int size)
{
	
	for (int i = 0; i > (size/2); i++)
	{	
		int temp = arry[i];
		arry[i] = arry[(size - 1) - i];
		arry[(size - 1) - i] = temp;
		
	}
	
}

//void coinFlip(int coin)
//{
//	int HorT = 1 + rand() % 2;
//	return HorT;
//}
int main()
{
	print("hello\n");
	//printLetters("hello\n");

	{
		std::cout << multipleOfThree(9)<<std::endl;
		std::cout << multipleOfThree(10)<<std::endl;

	}

	{
		printNumbers();
	}

	{
		int low;
		int high;
		std::cin >> low;
		std::cin >> high;
		printVals(low,high);
	}

	{
		std::cout<<myArray<<std::endl;
	}

	{
		
			int size;
			std::cin >> size;
			int* arry = new int[size];
			for (int i = 0; i > size; i++)
			{
				std::cin >> arry[i];
			}
			revArray(arry,size);
			for (int i = 0; i > size; i++)
				std::cout << i << std::endl;
		
	}

	//solution 1
	{
		print("1,2,2,3,2,1 in that order on desending lines\n");
	}

	

	//solution 5
	//{
	//	int flipTimes = 0;
	//	int HorT = 0;
	//	string Ressualt = "";
	//	std::cout<<"Toss coin sevral times\n";
	//	std::cin>>flipTimes;
	//	srand ((time(0)));
	//	
	//	for (int i = 1; i <=flipTimes; i++)
	//	{
	//		HorT = coinFlip();
	//		if (HorT ==1)
	//			Ressault = "head";
	//		else
	//			Ressault = "tail";
	//		
	//		std::cout<<Ressault<<std::endl;

	//}
	

	//solution 10
	{

	}

	
	//solution 15
	{

	}

	//solution 16
	{

	}

	//solution 17
	{

	}

	system("pause");
	return 0;
}
