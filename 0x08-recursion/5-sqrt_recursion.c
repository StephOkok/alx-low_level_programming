#include "main.h"
/**
 * _sqrt_recursion -  a function that returns the
 * natural square root of a number
 * @n: integer to check the squareroot
 * Return: the squareroot of the number or -1 if there is no
 */

int _sqrt_recursion(int n)
{
	if (n == 1 || n == 0)
		return (n);
	return (_sqrt_recursion(n));
}

/**
 * _sqrt_recursion -  a function that returns the
 * natural square root of a number
 * @n: integer to check the squareroot
 * Return: the squareroot of the number or -1 if there is no
 */
int _sqrt(int n, int i)
{
	if (n > i / 2)
		return (-1);
	else if (n * n == i)
		return (n);
	return (_sqrt(n + 1, i));
}
