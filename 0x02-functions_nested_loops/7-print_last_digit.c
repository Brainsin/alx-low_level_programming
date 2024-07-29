#include "main.h"
/**
 * print_last_digit - function that print last digit of a number
 * @a: represent an integer
 * Return: 0
 */
int print_last_digit(int a)
{
	int b = a % 10;

	if (b > 0)
	{
		_putchar(b + '0');
		return (b);
	}
	else
	{
		_putchar('0' + -b);
		return (-b);
	}
}
