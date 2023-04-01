#include <stdio.h>
#include "main.h"
/**
 * print_square -  prints a square,
 * @size:   is the size of the square
 */
void print_square(int size)
{
	int i, s;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (s = 0; s < size; s++)
			{
				_putchar('#');
			}
			_putchar('#');
			_putchar('\n');
		}
	}
		else
		{
			_putchar('\n');
		}
}
