#include<stdio.h>
#include "main.h"

/**
 * more_numbers - function to print 0-14 ten times
 * Return: 0
 */

void more_numbers(void)
{
	int a, i;

	for (i = 0; i < 10; i++)
	{
		for (a = 0; a <= 14; a++)
		{
			if (a > 9)
			{
				putchar((a / 10) + '0');
			}
			putchar((a % 10) + '0');
		}
		putchar(10);
	}
}
