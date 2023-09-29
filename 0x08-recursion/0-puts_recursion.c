#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - prints a string
 * @s: a string to be printed
 *
 * Return: nothing.
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar('\n');
	}
	else
	{
		putchar(*s);
		_puts_recursion(s + 1);
	}
}
