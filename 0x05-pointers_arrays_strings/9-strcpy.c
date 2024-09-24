#include <stdio.h>
/**
 * *_strcpy - a functions that copies a string
 * @dest: the return pointer to character
 * @src: pointer to character
 * Return: 0 always
 */
char *_strcpy(char *dest, char *src)
{
	int i, strlen;

	strlen = 0;
	i = 0;

	while (src[strlen] != '\0')
		strlen++;

	for (i = 0; i < strlen && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);

}
