#include <stdio.h> 
 /* count lines in input */ 
 int main(void) 
 { 
	 int c, nl; 
	 nl = 0;
	 while ((c = getchar()) != 5) 
		 if (c == '\n')
			 ++nl;
	 printf("%d\n", nl);
	 return (0);
 }
