#include "main.h"
#include <stdio.h>

/**
 * main - program that prints its name
 * @argc: argument count
 * @argv: argument vector
 *
 * Return:int
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		if (argc == 1)
			printf("%s\n", argv[i]);
		else
			break;
	}
	return (0);
}
