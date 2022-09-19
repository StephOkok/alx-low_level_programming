#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * rev_string - function that reverse of a string
 * @s: variable declared
 * Return: Nothing
 */
void rev_string(char *s)
{
	int a, tmp, len = _strlen(s);

	for (a = 0; a < len / 2; a++)
	{
		tmp = *(s + a);
		*(s + a) = *(s + len - a - 1);
		*(s + len - a - 1) = tmp;
	}
}
