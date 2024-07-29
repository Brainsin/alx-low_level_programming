#include "main.h"
/**
 * _islower - used to check for lower case charaters
 * @c: lower case characters
 * Return: always 0
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
	return (0);
}
