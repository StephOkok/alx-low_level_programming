#include "lists.h"
/**
 * print_listint - a function that prints all the elements of a listint_t list
 * @h: first element
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t tally = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		tally++;
	}
	return (tally);
}
