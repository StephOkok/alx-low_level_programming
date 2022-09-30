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
	int a = atoi(argv[1]);
	int b = atoi(argv[2]);

	if (argc != 3 || argc == 1)
	{
		printf("Error\n");
		return (1);
	}
	else if (argc != 0)
	{
		res = a * b;
		printf("%d\n", res);
	}
	return (0);
}

