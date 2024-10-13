#include "main.h"
/**
 * leet - function used to encrypt a string
 * @w: pointer to character
 * Return: 0 always
 */
char *leet(char *w)
{
	int x = 0, y, uc;
	char alpha[5] = {97, 101, 111, 116, 108};
	char sub[5] = {4, 3, 0, 7, 1};

	while (*(w + x) != '\0')
	{
		for (y = 0; y < 5; y++)
		{
			uc = alpha[x] - 32;
			if (w[x] == alpha[y] || w[x] == uc)
				w[x] = sub[y] + 48;
		}
		x++;
	}
	return (w);
}
