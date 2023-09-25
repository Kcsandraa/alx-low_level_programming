#include "main.h"
#include <stddef.h>
/**
 * _strchr - locates a string
 * @s: The string
 * @c: The character to be located
 * Return: a pointer to the first occurrence of the character c in the string s
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] ==  c)
			return (s + i);
		i++;
	}
	return NULL;
}
