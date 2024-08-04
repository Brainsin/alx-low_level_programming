#include "main.h"
/**
 * more_numbers - prints integer 0 - 14 ten times
 *
 * Return: 0 always
 */
void more_numbers(void)
{
	int i;
	int a;
	int b;
	int c;

	for (i = 0; i <= 9; i++)
	{
		for (a = 0; a <= 14; a++)
		{
			if (a < 10)
			{
				b = a;
			}
			else
			{
				c = a / 10;
				b = a % 10;
				_putchar(c + '0');
			}
			_putchar(b + '0');
		}
		_putchar('\n');
	}
}
