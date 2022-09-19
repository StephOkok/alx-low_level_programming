#include <stdio.h>
#include "main.h"
/**
 * _puts - function that prints a string followed by a new line
 * @str: this is the string
 * Return: nothing
 */

void _puts(char *str)
{
	int x = 0;

	while (*str != '\0')
	{
		putchar(*str);
		putchar('\n');
		str++;
		x++;
	}
}
