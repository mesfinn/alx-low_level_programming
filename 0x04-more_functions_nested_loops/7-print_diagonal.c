#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - Draw a diagonal line on the terminal
 * @n: Number of times the character \ should be printed
 * Return: Diagonal line
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				putchar(32);
			}
			putchar(92);
			putchar('\n');
		}
	}

}
