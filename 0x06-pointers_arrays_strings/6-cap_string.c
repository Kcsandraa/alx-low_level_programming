#include "main.h"
/**
 * cap_string - capitalizes all words of a string.
 * @c: the string
 * Return: the capitalised stirng
 */
char *cap_string(char *c)
{
	int i = 0;

	while (c[i] != '\0')
	{
		if (c[0] >= 'a' && c[0] <= 'z')
			c[0] = c[0] - 32;
		else
			c[0] = c[0];
		if (c[i] == ' ' || c[i] == '\t' || c[i] == '\n' || c[i] == ',' || c[i] == ';' || c[i] == '.' || c[i] == '!' || c[i] == '?' || c[i] == '"' || c[i] == '(' || c[i] == ')' || c[i] == '{' || c[i] == '}')
		{
			i++;
			if (c[i] >= 'a' && c[i] <= 'z')
			{
				c[i] = c[i] - 32;
			}
		}
		else
		{
			c[i] = c[i];
		}
		i++;
	}
	return (c);
}
