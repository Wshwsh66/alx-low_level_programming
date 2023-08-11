#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - generate random numbers to specify positive or negative
 *
 * return: always (0)
 *
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/* usage of if and coding it */

	if (n > 0)
	{
		printf("%d is positive \n", n);
	} else if (n < 0)
	{
		printf("%d is negative \n", n);
	}
	else
	{
		printf("%d is zero \n", n);
	}
	return (0);
}
