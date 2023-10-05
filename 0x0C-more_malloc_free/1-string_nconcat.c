#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat -  concatenates two strings.
 * @s1: The first string
 * @s2: The second string
 * @n: number of s2 bytes
 * Return: a pointer to a new space memory for the concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, len = 0, len1 = 0;
	char *s3;
	char *empty;

	empty = "";
	if (s1 == NULL)
		s1 = empty;
	if (s2 == NULL)
		s2 = empty;

	for (i = 0; s1[i] != '\0'; i++)
		len++;
	for (j = 0; s2[j] != '\0'; j++)
		len1++;
	if (n >= len1)
		n = len1;

	s3 = (char *)malloc((len + n + 1) * sizeof(char *));
	if (s3 == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
	{
		s3[i] = s1[i];
	}
	for (j = 0; j < n; j++)
	{
		s3[i + j] = s2[j];
	}
	s3[i + j] = '\0';
	return (s3);
}
