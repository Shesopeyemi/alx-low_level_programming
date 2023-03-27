#include <stdio.h>
#include "main.h"

/**
 * print_array - prints n element of array
 * @a: array
 * @n: number of elements
 * Return: returns nothing
 */

void print_array(int *a, int n)
{
	int inc;

	for (inc = 0; inc < n; inc++)
	{
		if (inc != n - 1)
			printf("%ld, ", a[inc]);
		else
			printf("%ld", a[inc]);
	}
	putchar(10);
}
