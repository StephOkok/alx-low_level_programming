#include "main.h"
/**
 * main - a program that prints the number of arguments passed into it
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 always success
 */

int main(int argc, char *argv[])
{
	int i = 0;

	if (argv[i] != 0)
		printf("%d\n", argc);
	return (0);
}
