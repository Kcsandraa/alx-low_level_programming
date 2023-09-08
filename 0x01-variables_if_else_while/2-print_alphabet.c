#include <stdio.h>
/**
 * main - Entry point
 * program prints the alphabet in lowercase
 * Return: 0 (success)
 */
int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
		putchar(alpha);

	putchar('\n');

	return (0);
}
