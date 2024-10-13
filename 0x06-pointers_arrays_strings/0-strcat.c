#include "main.h"
/**
 * _strcat - concatenates 2 strings
 * @dest:pointer to character
 * @src:pointer to character
 * Return: a string
 */
char *_strcat(char *dest, char *src)
{
	size_t dest_len;
	size_t i;
	int n = 0;

	while (dest[n])
		n++;
	dest_len = n;
	for (i = 0; src[i] != '\0'; i++)
		dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';
	return (dest);
}
