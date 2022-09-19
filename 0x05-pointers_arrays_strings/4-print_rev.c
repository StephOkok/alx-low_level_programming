#include <stdio.h>
#include "main.h"
/**
 * print_rev - function that prints the string in reverse
 * @s: character used for argument
 * Return: Nothing
 */

void print_rev(char *s)
{
	int x = '\0';
	while (*(s + x) != *(s + 0))
	{
		putchar(*s)
		s--;
		x--;
	}
	putchar('\n');
}
