#include<stdio.h>
/**
 * print_triangle - function for printing a triangle
 * @size: size of the triangle
 * Return: nothing
 */

void print_triangle(int size)
{
	int h, l;

	if (size > 0)
	{
		for (h = 1; h <= size; h++)
		{
			for ((l = size - h); l > 0; l--)
			{
				putchar(' ');
			}
			for (l = 0; l < h; l++)
			{
				putchar('#');
			}
			if (h == size)
			{
				continue;
			}
			putchar('\n');
		}
	}
	putchar('\n');
}
