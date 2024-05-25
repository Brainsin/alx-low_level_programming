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
		printf("%d", num1);
		num1++;
	}
	putchar('\n');
	return (0);
}
