#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Entry point
 * Description: print numbers 0 to 9  with ","
 * Return: Always 0 
 */

int main(void)
{
	int y;

	for (y = 0; y < 10; y++)
	{
		putchar(y);

		if  (y != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
