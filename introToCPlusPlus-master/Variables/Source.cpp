#include <iostream>
#include <string>

int main()
{
	int number;
	number = 235;
	std::cout << number << std::endl;


	int numA, numB;
	int sum;

	numA = 11;
	numB = 45;
	sum = numA + numB;
	std::cout << sum << std::endl;

	float numC, numD;
	float sum2;

	numC = 12.5;
	numD = 0.4;

	sum2 = numC + numD;

	std::cout << sum2 << std::endl;

	int userInput;

	std::cout << "please input a whole number" << std::endl;
	std::cin >> userInput;
	std::cout << userInput << std::endl;


	//and now for homework

	// problem A, Guessed Anwser: A) 14

	int numberA = 5;
	numberA = 9;
	numberA = 11;
	numberA = 14;
	std::cout << "A) " << numberA << std::endl;

	//Actual Answer: A) 14

	// problem B, Guessed Anwser: B) 9

	int numberB = 10;
	numberB = 9;
	int thingB = 55;
	thingB = 22;
	std::cout << "B) " << numberB << std::endl;

	//Actual Answer: B) 9

	// problem C, Guessed Anwser: C) 21

	int numberC = 3;
	numberC = 7;
	numberC = 1;
	int somethingC = 23;
	somethingC = 21;
	numberC = somethingC;
	std::cout << "C) " << numberC << std::endl;
	
	//Actual Answer: C) 21

	// problem D, Guessed Anwser: D) 3

	int numberD = 1;
	int somethingD = 3;
	numberD = somethingD;
	std::cout << "D) " << somethingD << std::endl;
	
	//Actual Answer: D)3

	// problem E, Guessed Anwser: E) 13

	int x = 13;
	x = x / 2;
	std::cout << "E) " << x << std::endl;
	// Actual Answer: E) 6

	// problem F, Guessed Anwser: F) 6.5

	float y = 13;
	y = y / 2;
	std::cout << "F)" << y << std::endl;

	//Actual Answer  F) 6.5

	//Celcius to Freedom units

	float degCelsius = 78.0f;
	float degFahrenheit = 0.0f; // Modify this variable below.
	degFahrenheit = (degCelsius*9.0) / 5.0 + 32.0;
	std::cout << "Celsius to Fahrenheit)" << std::endl;
	std::cout << "Celsius: " << degCelsius << std::endl;
	std::cout << "Fahrenheit: " << degFahrenheit<< std::endl;

	// Area of a Rectangle

	float rectWidth = 0.0f; // Modify this variable below.
	float rectHeight = 0.0f; // Modify this variable below.
	float rectArea = 0.0f; // Modify this variable below.
     
	std::cout << "Area of a Rectangle)" << std::endl;
	std::cout << "H: " << rectHeight << " , W: " << rectWidth << std::endl;
	std::cin >> rectWidth;
	std::cin >> rectHeight;
	std::cout << rectArea + rectWidth * rectHeight << std::endl;
	std::cout << "Area: " << rectArea << std::endl;

	//Average of Five
	float a, b, c, d, e; // Modify these variables below.
	float avg; // Modify this variable below.
	avg = a = b = c = d = e = 0.0f; // Initialize all to zero.
	std::cout << "assign each letter a number" << std::endl;
	std::cout << "a" << std::endl;
	std::cin >> a;
	std::cout << "b" << std::endl;
	std::cin >> b;
	std::cout << "c" << std::endl;
	std::cin >> c;
	std::cout << "d" << std::endl;
	std::cin >> d;
	std::cout << "e" << std::endl;
	std::cin >> e;


	std::cout << "Average of Five)" <<a+b+c+d+e/5 << std::endl;
	std::cout << a << "," << b << "," << c << "," << d << "," << e << std::endl;
	std::cout << "avg: " << avg << std::endl;
	//Number Swap

	int x = 13;
	int y = 24;
	x = y;
	y = x;
	std::cout << "Number Swap)" << std::endl;
	std::cout << "x is " << x << std::endl;
	std::cout << "y is " << y << std::endl;

	//Fun Facts for Your Age

	int age = 0;
	int month = 0;
	std::cout << "How old are you" << std::endl;
	std::cin >> age;
	month = age * 12;

	// <You must add more lines to output to the terminal>
	std::cout << "Howdy! You are " << age << " years old!";
	std::cout << "You've been alive for" << month;

	// Confronting Conventions

	//int age;
	//int bullet_count;
	//float dog_years;
	//int qty;
	//float shield_value;
	//float defense_matrix_cooldown;
	//int red_armor_value;
	//float red_armor_ratio;
	//int happiness;
	//int gandhi_aggression;

	//The Right Tool for the Job

	//int num; // integer
	//float num2; // single precision floating point
	//double num3; // A double-precision floating point value.
	//char num4; // Typically a single octet (one byte). This is an integer type.
	//bool num5; // Stores either value true or false.
	//void; // Represents the absence of type.
	//wchar_t num7; // A wide character type
	//long num8; //Not smaller than int.At least 32 bits.
	//short num9; // Not smaller than char. At least 16 bits.
	//long double num10; //Precision not less than double


	//Super Number Swap
	int p = 34;
	int w = 49;
	p = p + w;
	w = p - w;
	p = p - w;
	std::cout << "Number Swap)  a:  " << a <<"b:  "<<b<< std::endl;


	system("Pause");
	return(0);
}