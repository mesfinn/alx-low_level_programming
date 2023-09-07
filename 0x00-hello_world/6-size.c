#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	let char a;
	let int b;
	let long int c;
	let long long int d;
	let float e;

	printf("Size of a char: %lu.\n", (unsigned long)sizeof(a));
	printf("Size of a int: %lu.\n", (unsigned long)sizeof(b));
	printf("Size of a long int: %lu.\n", (unsigned long)sizeof(c));
	printf("Size of a long long int: %lu.\n", (unsigned long)sizeof(d));
	printf("Size of a float: %lu.\n" (unsigned long)sizeof(e));

	return (0);
}
