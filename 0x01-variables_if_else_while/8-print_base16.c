#include <stdio.h>
/**
 * main -Entry point
 *
 * Return: 0
 */
int main(void)
{
	int num1 = 0;
	int num2 = 9;
	char a = 'a';
	char f = 'f';

	while (num1 <= num2)
	{
		putchar('0' + num1);
		num1++;
	}
	while (a <= f)
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);

}
