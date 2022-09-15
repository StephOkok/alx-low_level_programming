#include "main.h"

/**
 * _isdigit - function to check if an integer is a digit 0-9
 * @c: integer used for checking if is 0-9
 * Return: 0 success
 */

int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
		return (1);
	}
	else
		return (0);
}
