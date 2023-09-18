#include "main.h"
/**
 * puts_half - prints half of a string
 * @str: parameter
 * Return: void
 */
void puts_half(char *str)
{
	int len, i, starter;

	len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	if (len % 2 == 0)
	{
		starter = len / 2;
	}
	else
	{
		starter = (len - 1) / 2;
	}

	for (i = starter; i < len; i++)
		_putchar(str[i]);
	_putchar('\n');
}
