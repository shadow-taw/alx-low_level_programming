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
			_putchar('\\');
			_putchar('\n');
			for (s = 0; s <= i; s++)
			{
				_putchar(' ');
			}
		}
	}
	else if (n <= 0)
	{
		_putchar('\n');
	}
}
