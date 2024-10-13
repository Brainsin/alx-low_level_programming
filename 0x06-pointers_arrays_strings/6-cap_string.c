#include "main.h"
/**
 * cap_string - converts a string to uppercase string
 * @i: pointer to charcter
 * Return: i always
 */
char *cap_string(char *i)
{
	int x = 0;

	while (*(i + x) != '\0')
	{
		if ((*(i + x) == '\t') || (*(i + x) == '\n') || (*(i + x) == ' ') || (*(i + x) == '.'))
		{
			x++;
			if (((*(i + x) >= 65) && (*(i + x) <= 90)) || ((*(i + x) >= 97) && (*(i + x) <= 122)))
				*(i + x) = *(i + x) - 32;
		}
		x++;
	}
	return (i);
}
