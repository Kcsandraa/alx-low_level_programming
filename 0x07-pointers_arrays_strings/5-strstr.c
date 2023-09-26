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
	char *ptr1;
	char *ptr2;

	while (*haystack)
	{
		ptr1 = needle;
		ptr2 = haystack;

		while (*ptr1 == *ptr2)
		{
			ptr1++;
			ptr2++;
		}
		if (*ptr1 == '\0')
		{
			return (haystack);
		}
		haystack++;
	}
	return (NULL);
}
