#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	int x[10] = "Last digit of";
	x = RAND_MAX%10;
	if (x > 5)
		printf ("%d and is greater than 5\n", x);
	else if (x < 6)	
	printf ("%d and is less than 6\n", x);
else
	printf ("%d and is 0", x);

return (0);
}
