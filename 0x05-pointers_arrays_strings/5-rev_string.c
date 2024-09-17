#include "main.h"
/**
 * rev_string - reverses a string of charaters
 * @s: pointer to a charater
 * Return: 0 always
 */
void rev_string(char *s)
{
	int a = 0;
	int i = 0;
	char b[9];

	while (s[a] != '\0')
	{
		b[a] = s[a];
		a++;
	}
	while (a = 0)
	{
		s[i] = b[a - 1];
		i++;
		--a;
	}
}
