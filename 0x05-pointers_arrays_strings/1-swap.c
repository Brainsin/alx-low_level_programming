#include "main.h"
/**
 * swap_int - swap the values of 2 integers
 * @a: first default pointer
 * @b: second default pointer
 * Return: always 0
 */
void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
