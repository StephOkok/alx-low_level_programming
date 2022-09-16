#include<stdio.h>
#include "main.h"
/**
 * main = program that prints numbers from 1-100, or fizz
 * if divisible by 3 or buzz if divisble 
 * by 5 or fizzbuzz for both
 * Return: return 0 for success
 */

int main(void)
{
	int d;

	for (d = 1; d <= 100; d++)
	{
		if (d % 3 == 0 && d % 5 != 0)
		{
			printf(" Fizz");
		}
		else if (d % 5 == 0 && d % 3 != 0)
		{
			printf(" Buzz");
		}
		else if (d % 3 == 0 && d % 5 == 0)
		{
			printf(" FizzBuzz");
		}
		else if (d == 1)
		{
			printf("%d", d);
		}
		else
		{
			printf(" %d", d);
		}
	}
	printf("\n");
	return(0);
}
