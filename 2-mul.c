#include "main.h"
#include <stdio.h>

/**
 * mul - function name to multipy
 * @a: integer 1
 * @b: integer 2
 * Return: product
 */

int mul(int a, int b)
{
	int result;

	result = a * b;

	return (result);
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	printf("%d\n", mul(98, 1024));
	printf("%d\n", mul(-402, 4096));
	return (0);
}
