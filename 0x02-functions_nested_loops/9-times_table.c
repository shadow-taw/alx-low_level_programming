#include "main.h"
/**
 * times_table - print the 9time table
 * Return: a void
 */
void times_table(void)
{
	int i, j, x;

	for (i = 0 ; i < 10 ; i++)
	{
		for (j = 0 ; j < 10 ; j++)
		{
			x = i * j;
			if (j == 0)
			{
				_putchar('0');
			}
			else if (x  < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(x + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(x / 10 + '0');
				_putchar(x % 10 + '0');
			}
		}
	_putchar('\n');
	}
}
