#include <stdio.h>
#include "main.h"

/**
*main - program that prints num, or fizz or buzz or fizzBuzz
*Return: return 0 success
*/
 int main(void)
{
	int d = 1;

	while (d++ < 100)
	{
		if ((d % 3 == 0) && (d % 5 == 0))
		{
			printf("FizzBuzz ");
		}
		else if ((d % 3) == 0)
		{
			printf("Fizz ");
		}
		else if ((d % 5) == 0)
		{
			if (d != 100)
			{
				printf("Buzz ");
			}
			else
				printf("Buzz")
		}
	}
}
