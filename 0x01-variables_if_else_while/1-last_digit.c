#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - Entry point
 * checks if a number is greater than 5, 0 and 6
 * Return: 0 (Sucess)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if ((n % 10) > 5)
		printf("Last digit of %d is %i and is greater than 5\n", n, n % 10);
	else if ((n % 10) < 6 && (n % 10) != 0)
		printf("Last digit of %d is %i and is less than 6 and not 0\n", n, n % 10);
	else if (n == 0)
		printf("Last digit of %d is %i and is 0\n", n);

	return (0);
}
