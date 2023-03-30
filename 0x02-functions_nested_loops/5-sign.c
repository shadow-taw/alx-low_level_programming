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
		return (1);
		putchar('+');
	}
	else if (n == 0)
	{
		return (0);
		putchar('0');
	}
	else
	{
		return (-1);
		putchar('-');
	}
}
