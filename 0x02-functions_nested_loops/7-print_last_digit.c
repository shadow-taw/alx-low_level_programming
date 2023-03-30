#include "main.h"
#include <stdlib.h>
/**
 * print_last_digit - print last digit of a number
 * @r: a number positive or negative
 *
 * Return: the last digit of a number
 */
int print_last_digit(int r)
{
	int j;

	j = abs(r % 10);
	_putchar(j + '0');
	return (j);
}
