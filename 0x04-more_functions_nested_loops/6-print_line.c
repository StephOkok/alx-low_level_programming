#include<stdio.h>
#include "main.h"

/**
 * print_line - function to print a line
 @n: character that forms the line
 * Return: 0
 */

void print_line(int n)
{
	while (n-- > 0)
	{
		putchar('_');
	}
	putchar('\n');
}
