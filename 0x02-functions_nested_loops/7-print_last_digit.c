#include "main.h"
/**
 * main -Entry point
 *
 * RETURN: 0
 */
int print_last_digit(int a)
{
	int b = a % 10;

	if(b > 0)
	{
		_putchar('0' + b);
		return(b);
	}
	else
	{
		_putchar('0' + -b);
		return(-b);
	}
}
