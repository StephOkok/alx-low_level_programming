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

	while (*(str + x) != '\0')
	{
		putchar(*(str + x));
		x++;
	}
}
