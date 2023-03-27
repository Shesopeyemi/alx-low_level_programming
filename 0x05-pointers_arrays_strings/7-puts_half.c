#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * puts_half - prints a string
 * @str: string to be printed
 * Return; returns nothing
 */

void puts_half(char *str)
{
	int i, len = _strlen(str);

	for (i = ((len - 1) / 2) + 1; i < len; i++)
		putchar(*(str + i));
	putchar(10);
}

/**
 * _strlen - returns the length of a string
 * @s: string to be returned
 * Return: length of the string
 */

int _strlen(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
		len++;

	return (len);
}
