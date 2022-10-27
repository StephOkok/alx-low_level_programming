#include "lists.h"
/**
* free_listint2 - a function that frees a listint_t list
* @head: double pointer to the start of the list
* Return: Nothing
*/
void free_listint2(listint_t **head)
{
	listint_t *next;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		next = (*head)->next;
		free(*head);
		*head = next;
	}
}
