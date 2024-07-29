#include "main.h"
/**
 * print_alphabet_x10 - print a-z 10 times
 *
 * return : 0
 */
void print_alphabet_x10(void)
{
	int A = 0;
	int B = 9;

	while (A <= B)
	{
		char a = 'a';

		while (a != '{')
		{
			_putchar(a);
			a++;
		}
		_putchar('\n');
		A++;
	}
}
