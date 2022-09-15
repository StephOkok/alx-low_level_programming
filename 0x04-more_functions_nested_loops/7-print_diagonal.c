#include <stdio.h>
#include "main.h"

/**
*print_diagonal - prints diagonal line
*@n: parameter
<<<<<<< HEAD
Return: return nothing
=======
Return: return 0
>>>>>>> b8910a0a684535c84f4fe2ac89f9e7f2c3f23ac5
*/

void print_diagonal(int n)
{
	int len, space;

	if (n > 0)
	{
		for (len = 0; len < n; len++)
		{
			for (space = 0; space < len; space++)
			{
				putchar(' ');
			}
			putchar('\\');

			if (len == (n - 1))
			{
				continue;
			}
			putchar('\n');
		}
	}
	putchar('\n');
}
