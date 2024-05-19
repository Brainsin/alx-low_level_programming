#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main -Entry point
 *
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 5)
		printf("last digit of %d is %d and is greater than 5\n", n, n % 10);
	else if (n == 0)
		printf("last digit of %d is %d and is zero\n", n, n % 10);
	else if (n < 6)
		printf("last digit of %d is %d and is less than 6\n", n, n % 10);
	return (0);
}
