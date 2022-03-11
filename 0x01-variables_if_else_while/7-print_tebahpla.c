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

	for (y = 122; y >= 97; y--)
	{
		putchar(y);
	}
	putchar('\n');
	return (0);
}
