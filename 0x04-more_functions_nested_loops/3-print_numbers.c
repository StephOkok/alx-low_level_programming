#include <stdio.h>
#include "main.h"
/**
 * print_numbers - function that prints numbers from 0-9 followed by a new line
 * Return: 0 is success
 */

void print_numbers(void)
{
	char x;

	for (x = 48; x < 58; x++)
	{
		putchar(x);
	}
	putchar(10);
}
