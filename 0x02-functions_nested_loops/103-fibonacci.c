#include <stdio.h>
/**
 * main - output sum of finobacci even Nums
 * fibonacci suit numbers
 * Return: 0 always success
 */
int main(void)
{
	unsigned long n1 = 0, n2 = 1, n3 = 0, sum = 0;

	while (n3 <= 4000000)
	{
		n3 = n1 + n2;
		n1 = n2;
		n2 = n3;
		if ((n1 % 2) == 0)
			sum += n1;
	}
	printf("%ld\n", sum);
	return (0);
}
