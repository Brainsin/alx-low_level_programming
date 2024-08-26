#include "main.h"
/**
 * print_diagonal - prints thr character \\ diagonally
 * @n: given number of times to print diagonally
 * Return: 0 always
 */
void print_diagonal(int n)
{
	int i;
	int j;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			if (n > 1)
			{
				for (j = 1; j <= i; j++)
				{
					_putchar(' ');
				}
				_putchar('\\');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
