#include "main.h"
/**
 * main - a program that multiplies two numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 always success
 */

int main(int argc, char *argv[])
{
	int res;
	int a;
	int b;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	a = atoi(argv[1]);
	b = atoi(argv[2]);

	res = a * b;
	printf("%d\n", res);
	return (0);
}
