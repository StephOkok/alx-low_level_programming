#include "main.h"

/**
 * print_number - prints an integer
 * @n: random integer
 *Return: void
 **/

void print_number(int n)
{
	char x, d;
	int r;
	int t = 0;

	if (n < 0)
	{
		_putchar ('-');
		x = (char)('0' - (n % 10));
		n = n / -10;
	}

		else
		{
			x = (char)((n % 10) + '0');
		n = n / 10;
	}

	r = 0;
	while (n > 0)
	{
		r = r * 10 + (n % 10);
		n = n / 10;
		t++;
	}

	while (r > 0)
	{
		d = (char)((r % 10) + '0');
		_putchar(d);
		r = r / 10;
		t--;
	}
	while (t != 0)
	{
		_putchar('0');
			t--;
	}
	_putchar(x);
}
