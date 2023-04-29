#include "main.h"
#include <stdio.h>

/**
 * print_numbers - print numbers
 * Return: 0 for success
 */

void print_numbers(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		_putchar(i);
	}
	_putchar('\n');

}


/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	print_numbers();
	return (0);
}
