#include <stdio.h>
/**
 * main- main block
 * Return 0 for succesful program 
 */
int main(void)
{
	char a;
	for (a = 'a'; a <= 'z'; a++)
		putchar(a);
	for (a = 'A'; a <= 'Z'; a++)
		putchar(a);
	putchar('\n');
	return (0);
}

