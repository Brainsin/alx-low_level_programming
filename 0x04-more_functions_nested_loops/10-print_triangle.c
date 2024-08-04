#include "main.h"
/**
 * print_triangle - prints '#' in for of triangle of an integer
 * @size: represent the size
 * Return: 0 always
 */
void print_triangle(int size)
{
	int i;
	int j;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar('#');
			}
			_putchar('#');
			_putchar('\n');
		}
		_putchar('\n');
	}
	else
		_putchar('\n');
}
