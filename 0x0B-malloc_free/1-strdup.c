#include "main.h"
/**
 * _strdup - a function that returns a pointer to a newly allocated
 * space in memory, which contains a copy of the string given as a parameter
 * @str: string to be duplicated
 * Return: NULL if str = NULL, pointer to the duplicated string
 */

char *_strdup(char *str)
{
	char *p;
	int n = 0;
	int i;

	if (str == NULL)
		return (NULL);
	p = malloc (sizeof(str) * n);
	for (i = 0; i < n; i++)
	{
		str[i] = p[i];
	}
	if (&p != &str)
		return (NULL);
	free(p);
	return (p);
}
