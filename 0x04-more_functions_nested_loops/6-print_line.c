#include "main.h"
/**
 * print_line - print a line in terminal
 * @n: number of the lhent of the line
 * Return: a line
 */
int print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	for (; i <= n ; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
