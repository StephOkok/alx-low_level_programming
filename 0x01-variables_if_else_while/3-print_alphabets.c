#include <stdio.h>
/**
* main - entry to the code
* Description print Caps and small letters
* Return: 0 meaning success
*/
int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		putchar(alpha);
	}
	for (alpha = 'A'; alpha <= 'Z'; alpha++)
	{
		putchar (alpha);
	}
putchar ('\n');
return (0);
}
