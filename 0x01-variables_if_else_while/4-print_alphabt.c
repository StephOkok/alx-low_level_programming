#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Description: output lowercase alphabets
 * Return: Always 0 (success)
 */
int main(void)
{
	int LC;

	for (LC = 'a'; LC <= 'z'; LC++)
	{
		if (LC != 'e' && LC != 'q')
		{
			putchar(LC);
		}
		else
		{
		}
	}
	putchar('\n');
	return (0);
}
