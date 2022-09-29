#include "main.h"
/**
 * _pow_recursion - a function that returns the
 * value of x raised to the power of y
 * @x: the base number
 * @y: the power number
 * Return: value of x raised to the power of y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else if (x == 1)
	{
		return (1);
	}
	else if (x != 0)
	{
		return (x * _pow_recursion(x, y - 1)); 
	}
	return (0);
}
