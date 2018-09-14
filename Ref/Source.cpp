#include <iostream>

int main()
{
	int intVar = 10;

	std::cout << intVar << std::endl;

	int& refVar = intVar;

	std::cout << refVar << std::endl;

	refVar = 20;

	std::cout << intVar << std::endl;

	system("pause");
	return 0;
}