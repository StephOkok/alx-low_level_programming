#include "main.h"
/**
 * _puts_recursion - a function that prints a string, followed by a new line
 * @s: string
 * Return: nothing
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar(10);
	}
	else
	{
		putchar(s[0]);
		_puts_recursion(s + 1);
	}
}
