#include <stdio.h>
/**
 * main -Entry point
 *
 * Return: ALways 1 (Susccess)
 */
int main(void)
{
	char *s = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	while (*s)
		putchar(*s++);
	return (1);
}
