#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - function that concatenates all the arguments of your program
 * @ac: arguments number
 * @av: argument variables
 * Return: Always 0.
 */

char *argstostr(int ac, char **av)
{
	char *s;
	int a, b, i, j;

	if (ac == 0)
		return (NULL);
	if (av == 0)
		return (NULL);
	a = 0;
	for (b = 0; b < ac; b++)
	{
		for (i = 0; av[b][i] != '\0'; i++)
			a++;
		a++;
	}
	a++;
	s = malloc(a * sizeof(char));
	if (s == 0)
		return (NULL);
	j = 0;
	for (b = 0; b < ac; b++)
	{
		for (i = 0; av[b][i] != '\0'; i++)
		{
			s[j++] = av[b][i];
		}
		s[j++] = '\n';
	}
	s[j] = '\0';
	return (s);
}
