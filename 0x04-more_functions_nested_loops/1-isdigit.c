# include "main.h"

/**
 * _isdigit - function to check if an integer is a digit 0-9
 * @c: integer used for checkking
 * Return: 1 if true and 0 if false
 */

int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
		printf("%c is a digit\n", c);
		return (1);
	}
	else
		printf("%c is not a digit\n", c);
	return (0);
}
