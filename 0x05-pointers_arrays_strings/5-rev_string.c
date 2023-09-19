#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 * Return: nothing
 */
void rev_string(char *s)
{
	int i, len;

	len = strlen(s);

	for (i = 0; i < len / 2; i++)
	{
		char temp = s[i];

		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
	}
}
