#include <stdio.h>
/**
 * main
 *
 * return
 */
int main(void)
{
	int a = 1024;
	if(a >= 0)
	{
		putchar('0' + (a % 10));
	}
	return(0);
}
