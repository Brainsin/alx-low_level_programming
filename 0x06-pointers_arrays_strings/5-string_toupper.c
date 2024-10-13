#include "main.h"
/**
 * string_toupper - changes lowercase character to uppercase characters
 * @e: pointer to character
 * Return: e
 */
char *string_toupper(char *e)
{
	int x;

	for (x = 0; *(e + x) != '\0'; x++)
	{
		if ((*(e + x) >= 97) && (*(e + x) <= 122))
			*(e + x) = *(e + x) - 32;
	}
	return (e);
}
