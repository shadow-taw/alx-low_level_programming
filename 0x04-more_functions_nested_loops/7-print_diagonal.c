#include <stdio.h>
#include "main.h"
/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n:  is the number of times the character \ should be printed
 * Return: a diagonal line
 */
void print_diagonal(int n)
{
	int i, s;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
		for (s = 0; s < i; s++)
		{
			_putchar(' ');
		}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
