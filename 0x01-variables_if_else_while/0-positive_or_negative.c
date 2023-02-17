#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - random n variable each time it is executed
 * Description: n greater than zero result is positive
 * if n is equal to zero then result is zero
 * if n is less than zero the result is negative
 * Return: 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
