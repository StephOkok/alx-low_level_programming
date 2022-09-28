#include "main.h"
/**
 * factorial - a function that returns the factorial of a given number
 * @n: the number to calculate the factorial
 * Return: 0 always success
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
