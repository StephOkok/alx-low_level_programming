#include "main.h"

/**
*print_number - prints an integer.
*
*@n: integer
*
*Return: void
*/

void print_number(int n)
{
	unsigned int r, l, count;

	if (n < 0)
	{
		_putchar(45);
		r = n * -1;
	}
	else
	{
		r = n;
	}

	l = r;
	count = 1;

	while (l > 9)
	{
		l /= 10;
		count *= 10;
	}

	for (; count >= 1; count /= 10)
	{
		putchar(((r / count) % 10) + 48);
	}
}
