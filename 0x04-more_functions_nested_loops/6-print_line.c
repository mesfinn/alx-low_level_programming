#include "main.h"
#include <stdio.h>

/**
 * print_line -  Draws a straight line in the terminal
 *@n: Number of times the character _ should be printed
 * Return: A straight line
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			putchar(95);
		}
	putchar('\n');
	}
}
