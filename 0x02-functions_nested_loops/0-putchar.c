#include <stdio.h>
/**
 * main - Entry point
 * Description:prints base 10 numbers
 * Return: Always 0 (success)
 */
 
int main(void)
{
	char* x = "_";
	char y[8] = "putchar";
	{
		putchar(*x);
		putchar(y[8]);
	}

	putchar('\n');
	return (0);
}
