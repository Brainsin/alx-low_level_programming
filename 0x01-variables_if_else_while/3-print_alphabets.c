#include <stdio.h>
/**
 * main -Entry point
 *
 * Return: 0
 */
int main(void)
{
	int a = 'a';
	int z = 'z';
	int A = 'A';
	int Z = 'Z';

	while (a <= z)
	{
		putchar(a);
		a++;
	}
	while (A <= Z)
	{
		putchar(A);
		A++;
	}
	putchar('\n');
	return (0);
}
