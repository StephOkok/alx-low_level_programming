#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Description: Print Hex numbers
 * Return: Always 0 (success)
 */
int main(void)
{
	char a;
	char b = '0';

	while (b <= '9')
	{
		putchar(b);
		b++;
	}
	for (a = 'a'; a <= 'f'; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
