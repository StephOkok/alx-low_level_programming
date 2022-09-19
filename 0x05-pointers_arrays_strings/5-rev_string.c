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
	int x = 0;

	while (*(s + x) == '\0' && *(s + x)!= 0)
	{
		s--;
		x--;
	}
}
