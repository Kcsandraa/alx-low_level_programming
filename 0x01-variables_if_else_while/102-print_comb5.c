#include <stdio.h>
/**
 * main - prints all possible combinations of two two-digit numbers
 * Return: always 0
 */
int main(void)
{
	int num, num1, n1, n2;

	for (num = 0; num <= 100; num++)
	{
		for (num1 = 0; num1 <= 100; num1++)
		{
			n1 = num / 10 * 10 + num1 / 10;
			n2 = num % 10 * 10 + num1 % 10;

			if (n1 < n2 && num < num1)
			{
				putchar(num / 10 + '0');
				putchar(num % 10 + '0');
				putchar(' ');
				putchar(num1 / 10 + '0');
				putchar(num1 % 10 + '0');

			if (num != 98 ||  num1 != 99)
			{
				putchar(',');
				putchar(' ');
			}
			}
		}
	}
	putchar('\n');

	return (0);
}
