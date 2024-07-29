#include "main.h"
/**
 * print_alphabet - prints lower case charaters
 *
 * RETURN : 0 success
 */
void print_alphabet(void)/* this prints a-z(lower case characters*/
{
	char i = 'a';

	while (i != '{')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
