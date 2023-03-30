#include <stdio.h>
#include <limits.h>
/**
 * jack_bauer - print every minut of day
 * @i: present hours
 *
 * @j: present minutes
 */
void jack_bauer(void)
{
	int i, j;

	for (i = 0 ; i < 24 ; i++)
	{
		for (j = 0 ; j < 60 ; j++)
		{
			putchar(i / 10 + '0');
			putchar(i % 10 + '0');
			putchar(':');
			putchar(j / 10 + '0');
			putchar(j % 10 + '0');
			putchar('\n');
		}
	}
}
