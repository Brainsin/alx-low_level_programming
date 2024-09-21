#include "main.h"
/**
 * puts_half - returns half of a string
 * @str: pointer to a string
 * Return: 0 always
 */
void puts_half(char *str)
{
	int i = 0;
	int x;

	while (str[i] != '\0')
		i++;
	if (i % 2 == 0)
	{
		x = i / 2;
		while (x <= (i - 1))
		{
			_putchar(str[x]);
			x++;
		}
	}

	else if (i % 2 != 0)
	{
		x = (i - 1) / 2;
		while (x <= (i - 1))
		{
			_putchar(str[x]);
			x++;
		}
	}
	_putchar('\n');

}
