#include "main.h"
/**
 * rev_string - reverses a string of charaters
 * @s: pointer to a charater
 * Return: 0 always
 */
void rev_string(char *s)
{
	int i;
	int x;
	char temp;

	i = 0;
	while (s[i])
		i++;
	x = i;
	for (i = 0; i < x / 2; i++)
	{
		temp = s[i];
		s[i] = s[(x - 1) - i];
		s[(x - 1) - i] = temp;
	}
}
