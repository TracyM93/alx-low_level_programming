#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints the minimum number of coins to make change
 * @argc: number of arguments to be passed
 * @argv: number of variables to calculate
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int i, change;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}

	change = atoi(argv[1]);

	for (i = 0; change > 0; i++)
	{
		if (change - 25 >= 0)
			change = change - 25;
		else if (change - 10 >= 0)
			change = change - 10;
		else if (change - 5 >= 0)
			change = change - 5;
		else if (change - 2 >= 0)
			change = change - 2;
		else if (change - 1 >= 0)
			change = change - 1;
	}
	printf("%d\n", i);
	return (0);
}
