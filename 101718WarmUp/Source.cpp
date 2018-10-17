#include <iostream>


int SumTo(int N)
{
	int sum = 0;

	for (int i = 1; i <= N; i++)
	{
		sum += i;
		
	}
	return sum;
}

int main()
{
	SumTo(5);
}