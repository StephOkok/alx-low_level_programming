#include <stdio.h>
#include "main.h"

/**
 * puts_half - prints half of the string
 * @str: string to print
 *
 * Return: Nothing
 */

void puts_half(char *str)
{
	int p, len = _strlen(str);

	for (p = ((len - 1) / 2) + 1; p < len; p++)
		putchar(*(str + p));
	putchar(10);
}
