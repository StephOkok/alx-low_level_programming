#include "main.h"
/**
 * _sqrt_recursion -  a function that returns the
 * natural square root of a number
 * @n: integer to check the squareroot
 * Return: the squareroot of the number or -1 if there is no
 */

int _sqrt_recursion(int n)
{
	int i = 1;

	if (i * i == n)
	{
		return (i);
	}
	else if (i * i != n)
	{
		return (-1);
	}
	else
	{
		i += 1;
	}
	return (_sqrt_recursion(n));
}
