#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - print random number and say positive, negative or zero
 * Return:0
 */
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
		printf("%i is negative\n", n);
	if (n > 0)
		printf("%i is positive\n", n);
	if (n == 0)
		printf("%i is zero\n", n);
	return (0);
}
