#include "main.h"

/**
 * print_number - prints an integer
 * @n: random integer
 *Return: void
 **/

void print_number(int n)
{
	char x, y;
	int q;
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

	q = 0;
	while (n > 0)
	{
		q = q * 10 + (n % 10);
		n = n / 10;
		t++;
	}

	while (q > 0)
	{
		y = (char)((q % 10) + '0');
		_putchar(cr);
		q = q / 10;
		t--;
	}
	while (t != 0)
	{
		_putchar('0');
			t--;
	}
	_putchar(x);
}
