#include <unistd.h>
#include "holberton.h"

/**
 * _putchar -writes the characterc to stdout
 * @c: The characterto print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set approppriately.
 */
 int _putchar(char c)
{
	return (write(1, &c, 1));
}
