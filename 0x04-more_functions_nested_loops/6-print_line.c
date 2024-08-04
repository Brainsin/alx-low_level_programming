#include "main.h"
/**
 * print_line - prints an underscore of a given number of times
 * @n: number of times _ should be printed
 * Return: 0 always
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	else
		_putchar('\n');
}
