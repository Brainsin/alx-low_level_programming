#include "main.h"
/**
 * _isupper - used to print upper case characters
 * @c: represent any given alphabet
 * Return: 0 always
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
		return (0);
}
