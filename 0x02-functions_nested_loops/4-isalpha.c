#include "main.h"
/**
 * _isalpha - functions used to check for lower charater
 * @c: reprsents a charater
 * Return: always 0
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else if (c >= 97 && c <= 122)
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
