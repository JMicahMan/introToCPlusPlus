#include <iostream>

//solution 1
int fibo(int numb)
{
	if (numb == 0)
	{
		return 0;
	}
	if (numb == 1) 
	{
		return 1;
	}
	else 
	{
		return fibo(numb - 1) + fibo(numb - 2);
	}
}

//solution 2
int pow(int numb)
{
	int superNumb;
	if (numb == 0)
	{
		return 0;
	}
	if (numb == 1)
	{
		return 1;
	}
	else
	{
		return pow (numb ^ superNumb);
	}
}

int main()
{
	

	system("pause");
	return 0;
}