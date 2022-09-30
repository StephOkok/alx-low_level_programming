#include "main.h"
/**
 * main - a program that multiplies two numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 always success
 */

int main(int argc, char *argv[])
{
	int i = 0;
	int a = atoi(argv[1]);
	int b = atoi(argv[2]);

	if (argc > 0)
		i = a * b;
	printf("%d\n", i);
	return (0);
}

