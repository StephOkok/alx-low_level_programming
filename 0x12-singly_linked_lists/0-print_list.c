#include "lists.h"
/**
* print_list - a function that prints all the elements of a list_t list
* @h: pointer to the list of elements
* Return: the number of nodes
*/
size_t print_list(const list_t *h)
{
	int i = 0, temp = 1;
	char nul[] = "(nil)";

	if (!h)
	{
		return (0);
	}
	if (h->str)
	{
		i = _strlen(h->str);
		printf("[%d] ", i);
	}
	if (!h->str)
	{
		printf("%s\n", nul);
	}
	else
		printf("%s\n", h->str);
	if (h->next)
		temp += print_list(h->next);
	return (temp);
}

/**
* _strlen - finds string length
* @str: string
* Return: length of string
*/
int _strlen(char *str)
{
	int i;

	for (i = 0; *(str + i);)
		i++;
	return (i);
}
