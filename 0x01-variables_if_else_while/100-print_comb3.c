#include <stdio.h>
/**
 * main -Entry Point
 * Description: print numbers between 0 and 90
 * Return: Always 0
 */
int main(void)
{
	int i,j;

	while (j < 58)
	{
		i =48;

		while (i < 58)
		{
			if (j != i && j < i)
			{
				putchar(j);
				putchar(i);
				if (i == 57 && j == 56)
				{
					break;
				}
				putchar(',');
				putchar(' ');
			}
			i++;
		}
		j++;
	}
	putchar('\n');
	return (0);
}
 
