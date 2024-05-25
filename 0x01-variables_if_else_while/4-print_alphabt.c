#include <stdio.h>
/**
 * main -Entry point
 *
 * Return: 0
 */
int main(void)
{
	char a = 'a';
	char z = 'z';

	for (;a <= z; a++)
	{
		if(a =='e')
			continue;
		if(a =='q')
			continue;
		putchar(a);
	}
	putchar('\n');
	return (0);
}
