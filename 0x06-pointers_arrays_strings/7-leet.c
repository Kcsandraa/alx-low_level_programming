#include "main.h"
/**
 * leet - encodes a string into 1337
 * @c: the string
 * Return: the encoded string
 */
char *leet(char *c)
{
	int s;

	for (s = 0; c[s] != '\0'; s++)
	{
		if (c[s] == 'a' || c[s] == 'A')
		{
			c[s] = 52;
		}
		else if (c[s] == 'e' || c[s] == 'E')
		{
			c[s] = 51;
		}
		else if (c[s] == 'o' || c[s] == 'O')
		{
			c[s] = 48;
		}
		else if (c[s] == 't' || c[s] == 'T')
		{
			c[s] = 55;
		}
		else if (c[s] == 'l' || c[s] == 'L')
		{
			c[s] = 49;
		}
	}
	return (c);
}
