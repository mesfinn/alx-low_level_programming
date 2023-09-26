#include "main.h"
#include <stdio.h>

/**
 * _strstr - locates a substring
 * @haystack:
 * @needle:
 *
 * Return: a pointer to the beginning of the located substring
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *h = haystack;
		char *n = needle;

		while (*haystack && *n && (*haystack == *n))
		{
			haystack++;
			n++;
		}
		if (!*n)
		{
			return (h);
		}
		haystack = h + 1;
	}
	return (NULL);
}
