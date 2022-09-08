#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char charType;
int intType;
long intType;
long longintType;
float floatType;

printf("Size of char: %lu bytes\n", sizeof(charType));
printf("Size of int: %lu bytes\n", sizeof(intType));
printf("Size of long: %lu bytes\n", sizeof(intType));
printf("Size of long: %lu bytes\n", sizeof(longintType));
printf("Size of float: %lu bytes\n", sizeof(floatType));
return (0);
}
