#include "main.h"
/**
 * jack_bauer - print the minutes of the day
 *
 * Return: no return
 */
void jack_bauer(void)
{
	int hrs = 0;
	int mns = 0;

	for (hrs; hrs < 24; hrs++)
	{
		for (mns; mns < 60; mns++)
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
