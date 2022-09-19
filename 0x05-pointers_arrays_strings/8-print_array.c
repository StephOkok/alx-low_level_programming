#include <stdio.h>
#include "main.h"

/**
* print_array - prints n element of a specific array
* @a: an array
* @n: No. of elements
* Return: nothing
*/

void print_array(int *a, int n)
{
	int i;

	for (i = 0; inc < n ; i++)
	{
		if (i != n - 1)
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);

	}
	putchar(10);
}
