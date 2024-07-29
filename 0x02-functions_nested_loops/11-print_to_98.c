#include "main.h"
/**
 * print_to_98 - prints a any giving number to 98
 * @n: represent any given integer
 * Return: always 0
 */
void print_to_98(int n)
{
	int a;
	int b;
	if (n <= 98)
	{
		for(; n <= 98; n++)
		{
			if (n < 0)
			{
				b = n * -1;
				if (n < -9)
				{
                                	_putchar('-');
                                	_putchar((b/10) + '0');
                                	_putchar((b%10) + '0');
				}
				_putchar('-');
				_putchar(b + '0');
			}
			else if (n > 9)
			{
				_putchar((n/10) + '0');
				_putchar((n%10) + '0');
			}
			else
				_putchar(n + '0');
			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
	else if (n >= 98)
	{
		for (; n>=98; n--)
		{
			if (n > 99)
			{
				a = n/10;
				_putchar((n/100) + '0');
				_putchar((a%10) + '0');
				_putchar((n%10) + '0');
			}
			else
			{
				_putchar((n/10) + '0');
				_putchar((n%10) + '0');
			}
			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	_putchar('\n');
}
