#include <stdio.h>
#include "main.h"

/**
* print_most_numbers - prints nums except 2 and 4
*
*Return: returns nothing
*/

void print_most_numbers(void)
{
	int y;

	for (y = 48; y < 58; y++)
	{
		if ((y == 50) || (y == 52))
		{
			continue;
		}
		putchar(y);
	}
	putchar(10);
}
