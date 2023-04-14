#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - reserve memory
 * @b: the size of memory needed
 * Return: a pointer, or 98 if erorre
 */
void *malloc_checked(unsigned int b)
{
	int *i;

	i = malloc(b);
	if (b != 0)
	{
		return (i);
	}
	else
	{
		_putchar(9 + '0');
		_putchar(8 + '0');
		_putchar('\n');
	}
}
