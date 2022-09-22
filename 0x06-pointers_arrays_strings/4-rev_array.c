#include "main.h"
/**
 * reverse_array - function that reverse the element of an array
 * @a: array
 * @n: number of elements
 */

void reverse_array(int *a, int n)
{
	int tmp, x;

	for (x = n - 1; x > n / 2; x--)
	{
		tmp = a[n - 1 - x];
		a[n - 1 - x] = a[x];
		a[x] = tmp;
	}
}
