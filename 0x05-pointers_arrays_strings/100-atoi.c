#include "main.h"
/**
 * _atoi - converts a string to an integer
 * @s: string to be converted to an integer
 * Return: int conveter
 */
int _atoi(char *s)
{
	int len, count, sign;

	count = 0;
	sign = 1;
	len = 0;

	while (s[len] == ' ' || (s[len] >= 9 && s[len] <= 13))
	{
		len++;
	}

	while (s[len] == '-' || s[len] == '+')
	{
		if (s[len] == '-')
			sign *= -1;
		len++;
	}

	while (s[len] != '\0')
	{
		if (s[len] >= '0' && s[len] <= '9')
		{
			count = count * 10 + (s[len] - '0');
		}
		else if (count != 0)
		{
			break;
		}
		len++;
	}
	return (sign * count);
}
