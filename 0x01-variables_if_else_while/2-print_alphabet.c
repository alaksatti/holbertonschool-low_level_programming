#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the alphabet in lowercase.
 *Description: Use putchar twice to print the alphaebt in lowercase).
 * Return: 0 if successful.
 */

int main(void)
{
	char i;
	/*char arr[] = "a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z,"*/
	for (i = 97; i <= 122; i++)
		putchar(i);
	putchar('\n');

	return (0);
}
