#include <iostream>



template<typename T>
int Min(int a, int b)
{
	if (a > b)
		return b;
	else if (a < b)
		return a;
}

template<typename T>
T Min(T a, T b)
{
	if (a > b)
		return b;
	else if (a < b)
		return a;
} //Returns the lower of two values

template<typename T>
int Max(int a, int b)
{
	if (a > b)
		return a;
	if (a < b)
		return b;
}

template<typename T>
T Max(T a, T b)
{
	if (a > b)
		return a;
	if (a < b)
		return b;
} //Returns the higher of two values

template<typename T>
int Clamp(int min, int max, int val)
{
	if (val > max)
	{
		val == max;
		return val;
	}

	else if (val < min)
	{
		val == min;
		return val;
	}

	else
		return val;
}

template<typename T>
T Clamp(T min, T max, T val)
{
	if (val > max)
	{
		val == max;
		return val;
	}

	else if (val < min)
	{
		val == min;
		return val;
	}

	else
		return val;
} //Constrains a value within the range of two other values

template<typename T>
char chrMin(char a, char b)
{
	if (a > b)
		return b;
	else if (a < b)
		return a;
}

template<typename T>
T chrMin(T a, T b)
{
	if (a > b)
		return b;
	else if (a < b)
		return a;
} // As above but first checks if a and b represent alphabetical characters. If so,
//the function will return the value that is alphabetically lower.

template<typename T>
char chrMax(char a, char b)
{
	if (a > b)
		return a;
	else if (a < b)
		return b;
}

template<typename T>
T chrMax(T a, T b)
{
	if (a > b)
		return a;
	else if (a < b)
		return b;
} //As above but first checks if a and b represent alphabetical characters.If so,
//the function will return the value that is alphabetically higher.

int main()
{
	int i = Min(5, 7);
	float f = Min(5.5f, 7.7f);
	int j = Max(9, 11);
	float k = Max(9.9f, 11.11f);
	int l = Clamp(51, 35, 55);
	float m = Clamp(51.5f, 35.3f, 30.9f);
	char n = chrMin('e', 'n');
	char o = chrMax('x', 'z');


	system("pause");
	return 0;
}
