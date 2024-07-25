#include "main.h"
/**
 * main - entry point
 *
 * RETURN : 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return(1);
	}
	else if(0 == n)
	{
		_putchar('0');
		return(0);
	}
	else if(n < 0)
	{
		_putchar('-');
		return(-1);
	}
	_putchar('\n');
	return(0);

}
