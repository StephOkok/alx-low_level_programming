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
	if (*s == '\0')
	{
		s--;
	}
	putchar('\n');
}
