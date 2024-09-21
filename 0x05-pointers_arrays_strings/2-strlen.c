#include <stdio.h>
/**
 * _strlen - counts the length of a string
 * @s: pointer of the string
 * Return: always 0
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}
