int rand()
{
	static int value = 1;
	int rand = 0;
	int numbers[] = {8, 8, 7, 9, 23, 74};

	rand = value - 1;
	value++;
	return(numbers[rand]);
}
