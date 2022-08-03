#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - function that concatenates two strings
 * @s1: string one being passed
 * @s2: string two being passed
 * @n: size
 * Return: Always 0.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int i, j, k, l;

	if (s1 == 0)
		s1 = "";
	if (s2 == 0)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;
	if (n > j)
		p = malloc((i + j + 1) * sizeof(char));
	else
		p = malloc((i + n + 1) * sizeof(char));
	if (p == 0)
		return (NULL);

	for (k = 0; k < i; k++)
		p[k] = s1[k];
	for (l = 0; l < n && l < j; l++, k++)
		p[k] = s2[l];
	p[k] = '\0';
	return (p);
}
