#include "main.h"
/**
 * print_number - a functions that print any given integer
 * @n: represents any given integer
 */
void print_number(int n)
{
	if (n > 10 && n < 100)
	{
		_putchar((n / 10) + '0');
		_putchar((n % 10) + '0');
	}
	else if (n > 100 && n < 1000)
	{
		_putchar((n / 100) + '0');
		_putchar(((n / 10) % 10) + '0');
		_putchar((n % 10) + '0');
	}
	else if (n >= 1000)
	{
		_putchar((n / 1000) + '0');
		_putchar((((n / 10) / 10) % 10) + '0');
		_putchar(((n / 10) % 10) + '0');
		_putchar((n % 10) + '0');
	}
	else if (n < 0)
	{
		_putchar('-');
		if (n < -9)
		{
			_putchar((-(n / 10)) + '0');
			_putchar((-(n % 10)) + '0');
		}
		else
			_putchar(-(n) + '0');
	}
	else
		_putchar(n + '0');
}
