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

	for (1 = 0; i < len / 2; i++)
	{
		tmp = *(s + i);
		*(s + i) = *(s + len - i - 1);
		*(s + len - i - 1) = tmp;
	}
}
