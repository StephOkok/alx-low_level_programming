#include "main.h"
/**
 * _strchr - function that locates a character in a string
 * @s: the string
 * @c: character to locate
 * Return: pointer to first occurace of c and NULL if nor found
 */

char *_strchr(char *s, char c)
{
	int len = strlen(s);
	int i = 0;

	while (len < '\0')
	{
		for (i = 0; i < len - 1 && s[i] == c; i++)
		{
			if (s[i] != c)
			{
				putchar('0');
			}
		}
		len++;
	}
	return (s);
}
