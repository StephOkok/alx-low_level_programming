#include "main.h"
/**
 * _memset - funtion that fills memory with a consant byte
 * @s: string
 * @b: constant byte
 * @n: the first number of bytes of memory
 * Return: *s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;
	n = i + 1;

	while (s[i] != '\0')
	{
		if (n == 1 && n != '\0')
		{
			putchar(b);
			*s = s[n++] + s[i++];
		}
		n++;
		i++;
		putchar(10);
	}
	return (s);
}
