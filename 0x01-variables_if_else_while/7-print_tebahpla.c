#include <stdio.h>
/**
 * main -Enrty point
 *
 * Return: 0
 */
int main(void)
{
	char a = 'a';
	char z = 'z';
	while(z >= a)
	{
		putchar(z);
		z --;
	}
	putchar('\n');
	return (0);
}
