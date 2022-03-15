#include "main.h"
/**
 * print_times_table -print the n times table
 *
 * @n: number of times (0 < n <= 15)
 *
 * Return: no return
 */
void print_times_table(int n)
{
	int row, col, sum;

	if (n >= 0 && n <= 15)
	{
		for (row = 0; row <= n; row++)
		{
			for (col = 0; col <= n; col++)
			{
				sum = (row * col);

				if (col == 0)
				{
					_putchar('0' + sum);
				}
				else
				{
					_putchar(',');
					_putchar(' ');

					if (sum <= 9)
					{
						_putchar(' ');
						_putchar(' ');
						_putchar('0' + sum);
					}
					else if (sum > 9 && sum < 100)
					{
						_putchar(' ');
						_putchar('0' + (sum / 10));
						_putchar('0' + (sum % 10));

					}
					else if ( sum >= 100)
					{
						_putchar('0' + (sum / 100));
						_putchar('0' + ((sum % 100) % 10);
						_putchar('0' + (sum % 10));
					}
				}
			}
			_putchar('\n');
		}
	}
}
