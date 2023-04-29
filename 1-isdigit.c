#include "main.h"
#include <stdio.h>

/**
 * _isdigit - function name to retrieve 1 or 0
 * @c: the character to be checked
 * Return: 1 if yes, 0 if no
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}

	return (0);

}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char c;
	
	c = '0';
	printf("%c: %d\n", c, _isdigit(c));
	c = 'a';
	printf("%c: %d\n", c, _isdigit(c));
	return (0);
}
