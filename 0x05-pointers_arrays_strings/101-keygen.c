#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"

/**
 * main - entry point
 *
 * Return: generated password
 */

int main(void)
{
	char r;
	int l;

	srand(time(0));
	while (l <= 2645)
	{
		r = rand() % 128;
		l += c;
		putchar(r);
	}
	putchar(2772 - l);

	return (0);
}
