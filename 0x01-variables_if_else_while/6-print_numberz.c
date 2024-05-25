#include <stdio.h>
/**
 * main -Entry point
 *
 * Return: 0
 */
int main(void)
{
	int num1 = 0;
	int num2 = 10;

	while (num1 < num2)
	{
		putchar('0' + num1);
		num1++;
	}
	putchar('\n');
	return (0);
}
