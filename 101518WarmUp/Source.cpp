


char commonNumbers(char *arr, int len)
{
	int timesSeen = 0;
	char mostSeen = arr[0];
	for (int i = 0; i < len; i++)
	{
		char Current = arr[i];
		int CurrentSeen = 0;

		for (int j = 0; j < len; j++)
		{
			if (arr[j] == Current) 
			{
				CurrentSeen++;
			}
		}
		if (timesSeen < CurrentSeen) 
		{
			mostSeen = Current;
			timesSeen = CurrentSeen;
		}
	}

	return mostSeen;
}

int main()
{
	char data[6] = { "apple" };

	commonNumbers(data, 6);
}



