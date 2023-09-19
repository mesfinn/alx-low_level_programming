#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts_half - prints half of a string
 * @str: string to be printed
 * Return: nothing
 */
void puts_half(char *str)
{
	int i, len;

	len = strlen(str);

	for (i = (len - 1) / 2; i < len; i++)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
