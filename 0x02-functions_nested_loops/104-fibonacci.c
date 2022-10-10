#include <stdio.h>
/**
* main - entry to the program
* Return: 0(always success)
*/

int main(void)
{
	long unsigned int num1 = 1, num2 = 1, num3 = 0, i;

	for (i = 0; i < 98; i++)
	{
		num3 = num1 + num2;
		num1 = num2;
		num2 = num3;
		if (i == 97)
		{
			printf("\n");
		}
		else
			printf("%lu, ", num1);
	}
	return (0);
}
