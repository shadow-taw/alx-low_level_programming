#include <stdio.h>
#include <ctype.h>
/**
 * print_sign - check if lower
 * @n: a number
 *
 * Return: 1 if lower case. 0 if not
 */
int print_sign(int n)
{
	if (n > 0)
	{
		putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		putchar('0');
		return (0);
	}
	else
	{
		putchar('-');
		return ('/');
	}
}
