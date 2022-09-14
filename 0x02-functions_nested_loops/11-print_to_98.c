#include "main.h"
/**
 * print_to_98 - fuction to print from an integer to 98
 * @n: interger which is the first count
 * Return: 0 always success
 */

void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf ("%d, ", n--);
		printf ("%d\n", n);
	}
	else
	{
		while (n < 98)
			printf ("%d, ", n++);
		printf ("%d\n", n);
	}
}
