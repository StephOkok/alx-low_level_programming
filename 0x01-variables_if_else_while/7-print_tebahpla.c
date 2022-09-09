#include <unistd.h>
#include <stdio.h>
/**
 * main - Entry point
 * Description: prints small alphabets in reverse
 * Return: Always 0 (success)
 */
int main(void)
{
	int y;

	for (y = 'z'; y >= 'a'; y--)
	{
		putchar(y);
	}
	putchar('\n');
	return (0);
}
