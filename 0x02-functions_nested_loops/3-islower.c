#include "main.h"
/**
 * main - entry point
 *
 * return
 */
int _islower(int c)
{
	if(c >= 97 && c <= 122)
	{
		return(1);
	}
	else
	{
		return(0);
	}
	_putchar('\n');
	return (0);
}
