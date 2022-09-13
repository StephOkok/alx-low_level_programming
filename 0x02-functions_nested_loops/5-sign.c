#include "main.h"
/**
 * print_sign - function to print sign of positive or negative
 * @n - interger fro argument
 * Return: 0 always success
 */
int print_sign(int n)
{
	if (n > 0)
	{
		putchar('+');
		return(1);
	}
	else if (n < 0)
	{
		putchar('-');
		return(-1);
	}
	else
		putchar('0');
	return(0);
}
