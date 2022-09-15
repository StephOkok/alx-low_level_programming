#include <stdio.h>
#include "main.h"
/**
* print_square - function used to print square
* @size: parameter
* Return: returns nothing
*/

void print_square(int size)
{
	int h, l;

	if (size > 0)
	{
		for (h = 0; h < size; h++)
		{
			for (l = 0; l < (size - 1); l++)
			{
				putchar('#');
			}
			putchar('#');
			putchar('\n');
		}
	}
	else
	{
		putchar('\n');
	}
}
