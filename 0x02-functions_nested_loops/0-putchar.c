#include "main.h"
/**
 * main - used to print a single charater to the screen
 *
 * Return: always 0
 */
int main(void)
{
	char str[] = "_putchar";
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
