# include <stdlib.h>
# include <time.h>
# include <stdio.h>
/**
 * main- Determine number is positive negative or zero
 * Return : 0 when program runs successfully
 */
int main(void)
{
	int n;
	srand(time(0));
	n = rand()-RAND_MAX/2;
	/* where to start coding*/
	if (n<0)
	{
		printf("%d is %s\n", n, " negative");
	}
	else if (n>0)
	{
		printf("%d is %s\n", n, "positive");
	}
	else
	{
		printf("%d is %n\n", n, "zero");
	}
	return (0);
}
