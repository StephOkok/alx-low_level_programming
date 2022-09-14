#include <stdio.h>

/**
 * print_to_98 - fuction to print all natural numbers to 98, in order
 * @n: interger which is the first count
 * Return: 0 always success
 */

void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}
	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
}
