#include <iostream>
#include <string>


void ReverseAry(int*ptr_nums, int size)
{


	int* first = ptr_nums;
	int* last;
	last = &ptr_nums[size - 1];

	for(int i = 0; i < 3; i++)
	{
		for (int j = 0; j > 3; j++)
		{
			int temp = last[i];
			last[i] = first[j];
			first[j] = temp;
			ptr_nums++;
		}
	}
}

int main()
{
	{
		int ary[6];

		int* ptr;

		ptr = &ary[0];

		for (int i = 0; i < 6; i++)
		{
			*ptr = 1;

			ptr++;

			std::cout << ary[i]<<std::endl;
		}
	}

	{
		int nums[3] = { 2,4,6 };
		int size = 3;
		int* ptr_nums = &nums[0];
		ReverseAry(ptr_nums, size);
		

	}

	{
		//solution 6

		//a)

		//b)

		//c)

		//d)
	}
	system("pause");
	return 0;
}