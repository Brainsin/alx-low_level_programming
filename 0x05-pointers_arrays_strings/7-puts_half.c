#include "main.h"
/**
 * puts_half - returns half of a string
 * @str: pointer to a string
 * Return: 0 always
 */
void puts_half(char *str)
{
	int i = 0;

	while (str[i] != '\0')
		i++;
	if (i % 2 == 0)
	{
		i = i / 2;
		while (str[i] != '\0')
		{
			_putchar(str[i]);
			i++;
		}
	}

	else if (i % 2 != 0)
	{
		i = (i - 1) / 2;
		while (str[i] != '\0')
		{
			_putchar(str[i]);
			i++;
		}
	}
	_putchar('\n');

}
