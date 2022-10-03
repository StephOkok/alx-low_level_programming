#include "main.h"
/**
 * str_concat - a function that concatenates two string
 * @s1: first string to concatenate
 * @s2: second string to concatenate
 * Return: pointer to the new memory if success, NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *s3;
	int len = 0;
	int i = 0;

	if (s1 == NULL && s2 == NULL)
		return (NULL);
	s3 = malloc(sizeof(char) * (strlen(s1) + strlen(s2) + 1));

	if (s3 == NULL)
		return (NULL);
	while (s1[i++])
		len++;
	for (i = 0; s2[i]; i++)
	{
		s1[len++] = s2[i];
		s3[i++] = s1[len++];
	}
	s3[len] = '\0';
	return (s3);
}
