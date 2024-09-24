#include "main.h"
/**
 * print_array - prints n elements of an array
 * @a: pointer to integer
 * @n: number of elements
 * Return: 0 always
 */
void print_array(int *a, int n)
{
	int h = 0;

	for (; h < n; h++)
	{
		printf("%d", a[h]);
		if (h != n - 1)
			printf(", ");
		else
			break;
	}
	printf("\n");
}
