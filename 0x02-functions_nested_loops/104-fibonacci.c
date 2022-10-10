#include <stdio.h>
/**
* main - entry to the program
* Return: 0(always success)
*/

int main(void)
{
	unsigned long num1 = 1, num2 = 1, num3 = 0;
	int i;

	for (i = 0; i < 98; i++)
	{
		num3 = num1 + num2;
		printf("%lu", num3);
		num1 = num2;
		num2 = num3;
		if (i == 97)
		{
			printf("\n");
		}
		else
			printf(", ", num1);
	}
	return (0);
}
