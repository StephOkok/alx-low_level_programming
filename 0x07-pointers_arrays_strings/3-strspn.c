#include "main.h"
/**
 * _strspn - a function that gets the length of a prefix substring
 * @s: string to scan
 * @accept: string containing characters that is matched to s
 * Return: intial string containing characters of accept
 */

unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int s_len = strlen(s);
	int accept_len = strlen(accept);

	for (i = 0; i < s_len && i != '\0'; i++)
	{
		for (i = 0; i < accept_len && accept[i] != s[i]; i++)
		{
			while ((accept[i] = s[i]) && (accept[i] < accept_len) && (s[i] < accept_len))
			{
				i++;
				accept_len++;
				*s = *accept; 
			}
		}
	}
	return (s_len);
}
