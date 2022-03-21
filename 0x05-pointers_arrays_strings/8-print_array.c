#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers.
 * @a: input array.
 * @n: input n elements
 * Returns: no return.
 */
void print_Array(int *a, int n)
{
	int i = 0;

	for (n--;  n >= 0; n--, i++)
	{
		printf("%d", a[i]);

		if (n > 1)
			printf(", ");
	}
	printf("\n");
}
