#include "main.h"
/**
 * print_to_98 - print every number from n to 98
 * @n: a number need to be less than 98
 * Return: 98
 */
void print_to_98(int n)
{
	while (n <= 98)
	{
		if (n < 10)
		{
			_putchar(n  + '0');
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
		}
		else if (n == 98)
		{
			_putchar(n / 10 + '0');
			_putchar(n % 10 + '0');
		else
		{
			_putchar(n / 10 + '0');
			_putchar(n % 10 + '0');
			_putchar(',');
			_putchar(' ');
		}
		n++;
	}
}
