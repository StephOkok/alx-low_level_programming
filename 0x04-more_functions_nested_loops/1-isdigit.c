#include "main.h"

/**
 * _isdigit - function to check if an integer is a digit 0-9
 * @c: integer used for checking if is 0-9
 * Return: 1 if true 0 if false
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
