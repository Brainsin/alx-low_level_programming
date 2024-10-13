#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest: pointer to character
 * @src: pointer to character
 * @n: indexing variable
 * Return: a string
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len;
	int i;
	int m;

	for (m = 0; dest[m] != '\0'; m++)
		;
	dest_len = m;
	for (i = 0 ; i < n && src[i] != '\0' ; i++)
		dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';
	return (dest);
}
