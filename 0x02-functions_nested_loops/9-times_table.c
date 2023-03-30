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
				putchar(0 + '0');
			}
			else if (x  < 10)
			{
				putchar(',');
				putchar(' ');
				putchar(x + '0');
			}
			else
			{
				putchar(',');
				putchar(' ');
				putchar(x / 10 + '0');
				putchar(x % 10 + '0');
			}
		}
	putchar('\n');
	}
}
