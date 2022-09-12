#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main -print the number if it is positive,negative or zero
 *
 * Description: using the main function
 * this program prints "Programming prints if the number is positive ,negative or zero"
 *Return:0
 */int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else
		printf("%d is zero\n", n);
	return (0);
}
