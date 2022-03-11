#include <stdio.h>

/**
 * main - Entry point
 * Description: reverse alphabet
 *
 * Return: Always 0
 */
int main(void)
{
	int y;

	for (y = 'Z'; y >= 'A'; y++)
	{
		putchar("%c", y);
	}
	putchar('\n');
	return (0);
}
