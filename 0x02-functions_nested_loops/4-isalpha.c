#include "main.h"
/**
 * _isalpha - checks  if character is an alphabet
 *
 * @c: character in ASCII code
 *
 * Return: 1 when the character is an alphabet . ) otherwise
 */
int _isalpha(int c)
{
	if (c > 64 && c < 123)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
