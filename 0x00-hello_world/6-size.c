#include <stdio.h>
/**
 * main - printf
 *
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;
	float f;
	char c;
	long int I;
	long long int li;

	printf("Size of int is: %lu byte(s)\n", (unsigned long)sizeof(i));
	printf("Size of float is: %lu byte(s)\n", (unsigned long)sizeof(f));
	printf("Size of char is: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of long int is: %lu byte(s)\n", (unsigned long)sizeof(I));
	printf("Size of long long int is: %lu bytes(s)\n", (unsigned long)sizeof(li));
	return (0);
}
