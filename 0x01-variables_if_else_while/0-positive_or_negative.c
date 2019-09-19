#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* determine if a random number is positivem, negative, or zero */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

if (n < 0)
	{
		printf("%d is positive\n", n);
	}
        if (n > 0)
	{
		printf("%d is negative\n", n);
	}
	if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	return (0);
}
