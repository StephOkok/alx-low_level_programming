#include "main.h"
/**
 * string_nconcat - a function that concatenates two strings
 * @s1: first string
 * @s2: second string;
 * @n: first number of s2 bytes
 * Return: pointer to the newly allocated space in memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s3;
	int j = 0;
	unsigned int i = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	s3 = malloc(sizeof(char) * ((strlen(s1) + strlen(s2)) + 1));

	if (s3 == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		s3[j] = s1[i];
		i++;
		j++;
	}
	i = 0;
	while (i < n)
	{
		s3[j] = s2[i];
		i++;
		j++;
	}
	if (n > i)
	{
		s3[j] = s2[i];
		i++;
		j++;
	}
	s3[j] = '\0';
	return (s3);
}
