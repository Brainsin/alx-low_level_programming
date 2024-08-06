#include "main.h"
/**
 * jack_bauer - prints every minute of the day
 *
 * RETURN : 0
 */
void jack_bauer(void)
{
	int b;
	int c;
	int d;

	for (b = 0; b <= 23; b++)
	{
		for (c = 0; c <= 5; c++)
		{
			for (d = 0; d <= 9; d++)
			{
				_putchar((b /10) + '0');
				_putchar((b % 10) + '0');
				_putchar(':');
				_putchar(c + '0');
				_putchar(d + '0');
				_putchar('\n');
			}
		}
	}
}
