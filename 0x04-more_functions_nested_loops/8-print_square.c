#include "main.h"
/**
 * print_square - used to print the charater # of 'n' number of times
 * @size: represents the size of the square
 * Return: 0 always
 */
void print_square(int size)
{
	int i;
	int j;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
