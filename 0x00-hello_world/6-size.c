#include <stdio.h>
/**
 * main -main block
 * Return 0
 */
int main(void)
{
	printf("Size of a char: %i byte(s)\n", sizeof(char));
	printf("size of an int: %i byte(s)\n", sizeof(int));
	printf("size of a long:%i byte(s)\n", sizeof(long));
	printf("size of a long long: %i byte(s)\n", sizeof(long long));
	printf("size of a float: %i byte(s)\n", sizeof(float));
	return (0);
}
