#include <stdio.h>

/**
 * main - prints Buzz each numbers of 3 and 5.
 * Return: Always 0 (Success).
 */
int main(void)
{
	int i = 1;

	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
<<<<<<< HEAD
			{
				printf("FizzBuzz");
			}
			else if (i % 3 == 0)
			{
				printf("Fizz");
			}
			else if (i % 5 == 0)
			{
				printf("Buzz");
			}
			else
			{
				printf("%i", i);
			}
=======
		{
			printf("FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%i", i);
		}
>>>>>>> 3eb1d88edd426d613df2647e977f7b2817b105fb

		if (i != 100)
		{
			putchar(' ');
			}

			i++;
	}
	putchar('\n');
	return (0);
}
