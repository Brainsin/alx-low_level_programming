#include "main.h"
/**
 * jack_bauer - prints every minute of the day
 *
 * RETURN : 0
 */
void jack_bauer(void)
{
	int a, b;

	for (a = 0;  a <= 23; a++)
	{
		for (b = a + 1; b <= 59; b++)
		{
		_putchar((a / 10) + '0');
		_putchar((a % 10) + '0');
		_putchar(':');
		_putchar((b / 10) + '0');
		_putchar((b % 10) + '0');
		_putchar('\n');
		}
	}
	_putchar('\n');
}
