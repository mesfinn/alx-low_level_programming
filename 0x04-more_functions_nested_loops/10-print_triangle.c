#include "main.h"
#include <stdio.h>

/**
 * print_triangle - Prints a triangle
 * @size: Size of the triangle
 * Return: Triangle
 */
void print_triangle(int size)
{
	int i, j, z;

	if (size <= 0)
	{
		putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = size - i; j > 1; j--)
			{
				putchar(32);
			}
			for (z = 0; z <= i; z++)
			{
				putchar(35);
			}
			putchar('\n');
		}
	}
}
