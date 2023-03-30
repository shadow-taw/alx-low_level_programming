#include <stdio.h>
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

	r = abs(r);	
	j = r % 10;
	j = j * 11;
	return (j);
}
