#include "main.h"
/**
 * reverse_array - function that reverse the element of an array
 * @a: array
 * @n: number of elements
 */

void reverse_array(int *a, int n)
{
	int tmp, x;
	for (index = n - 1 > n / 2; index--)
	{
		tmp = a[n - 1 - index];
		a[n - 1 - index];
		a[index] = tmp;
	}
}
