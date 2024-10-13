#include "main.h"
/**
 * reverse_array - reverses an array of integers
 * @a: pointer to integer
 * @n: length of integer array
 * Return: no return for void
 */
void reverse_array(int *a, int n)
{
	int i;
	int x;

	for (i = 0; a[i] < n; i++)
		;
	i = n;
	for (i = 0; i < n / 2; i++)
	{
		x = a[i];
		a[i] = a[(n - 1) - i];
		a[(n - 1) - i] = x;
	}
}
