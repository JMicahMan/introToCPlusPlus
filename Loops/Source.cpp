#include <iostream>
#include <string>

int main()
{
	{
		//counting with C++
		int i = 1;
		for (int i = 0;  i <= 10; i++)
		{
			std::cout << i << std::endl;
		}

	}
	{
		//exit using Q
		char input;
		do
		{
			std::cout << "press q to exit\n";
			std::cin >> input;

		}

		while (input != 'q' && input != 'Q');
		{
			system("cls");
		}
	}
	{
		//print all even numbs 0-10 including 10
		int r = 2;
		for (int r = 0; r <= 10; r+=2)
		{
			std::cout << r << std::endl;
		}


	}

	//solution 1 
	{
		int a = 2;
		for (int a = 100; a == 0; a -= 2)
		{
			std::cout << a << std::endl;

		}

	}
	//solution 2
	{
		for(int k=1:k<=100;k++)
		{
       			 if(k%15==0)cout<<"FizzBuzz"<<endl;
        	 	 else if(k%5==0)cout<<"Buzz"<<endl;
       			 else if(k%3==0)cout<<"Fizz"<<endl;
       			 else cout<<k<<endl;
    }
	}
	{
		//solution 3
		  int answer = 0;
     			for (int g = 0; g < 1000; g++){
          		if ((g%3 == 0) || (g%5 == 0)) {answer += g;}
				{
     			cout << endl << "Project Euler (mispelled as Eula in excercise) answer is " << answer << endl;
				}
	}

	{
		//solution 4
		//part 1
		{
		int a = 100;
		while (a ==0) 
		{
			std::cout << a << std::endl;
			a -=2;	
		}
		} 
		//part 2
		{
		int k = 1;
		while (k <= 100)
		{
			 if(k%15==0)cout<<"FizzBuzz"<<endl;
        	 	 else if(k%5==0)cout<<"Buzz"<<endl;
       			 else if(k%3==0)cout<<"Fizz"<<endl;
       			 else cout<<k<<endl;
			k++;
		}
		}
		//part 3
		{
			int answer = 0;
			int g = 0;
			while (g < 1000)
			{
			if ((g%3 == 0) || (g%5 == 0)) {answer += g;}
				{
     			cout << endl << "Project Euler (mispelled as Eula in excercise) answer is " << answer << endl;
				}
			}
		}
	}
	system("Pause");
	return(0);
}



