#include <iostream>

template<typename T>
T Add(T a, T b)
{
	float sum;
	sum = a + b;
	return sum;
}


int main()
{
	
	int c = Add(5, 7);
	float d = Add(5.5, 7.7);

	system("pause");
	return 0;
}
