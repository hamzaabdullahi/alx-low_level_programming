#include<stdlib.h>
#include<time.h>
#include<stdio.h>
/**
 * main - determines if last digit of a random number is lessthan five or zero.
 * Return : 0 on successful run 
 */
int main(void)
{
	int n;
	int lastn;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastn = n % 10;
	if (lastn > 5)
	{
		printf("Last digit of %d is %d and is greter than 5\n", n, lastn);
	}
	else if (n == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, lastn);
	}
	else
	{
		printf("Last digit of %d is %d and is les than 6 and not 0\n", n, lastn);
	}
	return (0);
}


