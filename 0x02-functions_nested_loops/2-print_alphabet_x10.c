#include "main.h"
/**
 * print_alphabet_x10 - Prints the alphabet in lower case 10 times
 * Return: Always 0 (Success) 
 *
 */
void print_alphabet_x10(void)
{
	 int i, y;

	 for (y = 0; y < 10; y++)
	 {
		 for (i = 97; i < 123; i++)
		 {
			_putchar(i);
		 }
		 _putchar('\n');
	 }
}
