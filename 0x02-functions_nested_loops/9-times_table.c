#include "main.h"
/**
 * times_tables - print 9 by 9 times table
 *
 * Return: alwyas 0
 */
void times_table(void)
{
	int a, b ,c;

	a = 0;
	while (a <= 9)
	{
		b = 0;
		while (b <= 9)
		{
			c = a * b;
			if (c > 9)
			{
				_putchar((c/10) + '0');
				_putchar((c%10) + '0');
				if (b != 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			else
			{
				_putchar(c + '0');
				if (b != 9)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
			}
			b++;
		}
		_putchar(10);
		a++;
	}
}

