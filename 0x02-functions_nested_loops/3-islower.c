#include "main.h"
#include <ctype.h>
/**
 * islower - function to find if a character is lowercase
 *
 * Return: Always 0 (Success).
 */
int _islower(int c)
{
	int i;

	if (int c > 96 && c < 123)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}

