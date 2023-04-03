#include <stdio.h>
#include "main.h"
/**
 * print_triangle - print a triangle
 * @size: the size of the tringle
 * Return: a tringle
 */
void print_triangle(int size)
{
	int i, j, y;

	for (i = size; i > 0; i--)
	{
	for (j = 1; j < i; j++)
	{
		_putchar(' ');
	}
	for (y = size; y >= i; y--)
	{
		_putchar('#');
	}
		_putchar('\n');
	}
	if (size <= 0)
	{
		_putchar('\n');
	}
}
