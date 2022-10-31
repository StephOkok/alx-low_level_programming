#include "main.h"

/**
* check_str - check if the string contains 1 and 0
* @b: string to be checked
* Return: 1 if string is validated or else 0
*/

int check_str(const char *b)
{
	if (b == NULL)
		return (0);
	while (*b)
	{
		if (*b != '1' && *b != '0')
			return (0);
		b++;
	}
	return (1);
}
/**
* binary_to_uint - a function that converts a binary number to an unsigned int
* @b: pointer to the strings of 0 and 1 chars
* Return: the converted number, or 0 if there is one or
* more chars in the string b that is not 0 or 1 or b is NULL
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int d = 0;
	int len = 0, base = 1;

	if (!check_str(b))
		return (0);
	while (b[len] != '\0')
		len++;
	while (len)
	{
		d += ((b[len - 1] - '0') * base);
		base *= 2;
		len--;
	}
	return (d);
}
