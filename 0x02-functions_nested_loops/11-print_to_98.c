#include "main.h"
/**
 * print_to_98 - print integersform 0 to 98
 * @n: integer to be processed
 */
void print_to_98(int n)
{
	for (n = 0; n < 98; n++)
	{
		if (n < 98)
			_putchar(',');
			_putchar(n);
		else if ( n == 98)
			_putchar(n);
		else
			while (n > 98)
				n--;
	}
}
