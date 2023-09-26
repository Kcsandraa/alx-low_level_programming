#include "main.h"
#include <stddef.h>
/**
 * _strstr - locates a substring
 * @haystack: The string
 * @needle: The substring
 * Return: a pointer to needle or Null if its not found
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack )
	{
		while (*haystack == *needle)
		{
			haystack++;
			needle++;
		}
		if (*needle == '\0')
		{
			return (haystack);
		}
		haystack++;
	}
	return (NULL);
}
