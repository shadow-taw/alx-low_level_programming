#include "main.h"
/**
 * print_line - print a line in terminal
 * @n: number of the lhent of the line
 * Return: a line
 */
void print_line(int n)
{
	int i;

	for (i = 0; i <= n ; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
