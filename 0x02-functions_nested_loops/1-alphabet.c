#include "main.h"

/**
 * print_alphabet - function that prints the alphabet, lowercase
 * You can only use _putchar twice in your code
 * Return: nothing.
 */

void print_alphabet(void)
{
	int n = 'a';

	while (n <= 'z')
{
	_putchar(n);
	n += 1;
}
	_putchar('\n');
}
