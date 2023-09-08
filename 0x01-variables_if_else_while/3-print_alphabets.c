#include <stdio.h>
/**
 * main - Entry point
 * using putchar to print the alphabet in lowercase and in uppercase
 * Return: 0 (success)
 */
int main(void)
{
	char lower;
	char upper;

	for (lower = 'a'; lower <= 'z'; lower++)
		putchar(lower);
	for (upper = 'A'; upper <= 'Z'; upper++)
		putchar(upper);

	putchar('\n');

	return (0);
}
