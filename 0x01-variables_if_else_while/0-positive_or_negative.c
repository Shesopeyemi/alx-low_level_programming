#include <stdio.h>

/**
 * main - print set of codes to find if the number is positive, zero or negative
 *
 * Return: 0
 */
int main(void)
{
int n;

/* local variable definition */
if (n > 0)
{
	printf("%i is positive\n", n);
}
else if (n == 0)
{
	printf("%i is zero\n", n);
}
else if (n < 0)
{
	printf("%i is negative\n", n);
}
return (0);
}
