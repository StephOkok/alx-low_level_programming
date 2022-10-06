#include "main.h"
/**
 * _calloc - a function that allocates memory for an array, using malloc
 * @nmemb: number of elements
 * @size: size of the array
 * Return: the pointer to the allocated memory of NULL on fail
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *array;

	if (nmemb == 0 || size == 0)
		return (NULL);
	array = malloc(sizeof(int) * (size + 1));

	if (array == 0)
		return (NULL);
	nmemb = 0;
	for (nmemb = 0; nmemb < size; nmemb++)
	{
		array[nmemb] = size - 1;
	}
	array[nmemb] = '\0';
	return (array);
}
