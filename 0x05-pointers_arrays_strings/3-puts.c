#include "main.h"
/**
 * _puts - prints any given string
 * @str: pointer to a character
 * Return: 0 always
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
