#include "main.h"
/**
 * _isdigit - checks if the input is an integer
 * @c: represent any given integer
 * Return: 0 always
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
