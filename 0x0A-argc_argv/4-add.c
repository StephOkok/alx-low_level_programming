#include "main.h"
/**
 * main - a program that adds positive numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int a, b, sum;

	if (argc == 1)
	{
		printf("0\n");
	}
	a = atoi(argv[1]);
	b = atoi(argv[2]);

	if (a == (a * -1) || b == (b * -1))
	{
		printf("Error\n");
		return (1);
	}
	sum = a + b;
	printf("%d\n", sum);

	return (0);
}
	
