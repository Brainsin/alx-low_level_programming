#include "main.h"
/**
 * puts2 - function that print charaters is two's
 * @str: pointer to character
 * Return: 0 always
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i = i + 2;
	}
	_putchar('\n');
}