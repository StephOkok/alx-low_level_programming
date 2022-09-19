#include <stdio.h>
#include "main.h"
/**
 * swap_int - function to swap two integers
 * @a: first integer to be swapped
 * @b: second integer to be swapped
 * Return: 0 (success)
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
