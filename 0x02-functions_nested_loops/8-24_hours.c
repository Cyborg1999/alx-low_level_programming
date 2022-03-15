#include "main.h"
/**
 * jack_bauer - print the minutes of the day
 *
 * Return: no return
 */
void jack_bauer(void)
{
	int hrs;
	int mns;

	for (hrs = 0; hrs < 24; hrs++)
	{
		for (mns = 0; mns < 60; mns++)
		{
			_putchar('0' + (hrs / 10));
			_putchar('0' + (hrs % 10));
			_putchar(58);
			_putchar('0' + (mns / 10));
			_putchar('0' + (mns % 10));
			_putchar('\n');
		}
	}
}
