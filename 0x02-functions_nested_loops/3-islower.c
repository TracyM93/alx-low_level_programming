#include "main.h"

/**
 * _islower - function that checks for lowercase charcaters
 * @c: The input character to check
 * Returns 0 otherwise
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
