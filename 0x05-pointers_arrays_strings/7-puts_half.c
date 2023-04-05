#include <stdio.h>
#include <string.h>
/**
 * puts_half - print the half of a string
 * @str: the string
 */
void puts_half(char *str)
{
	int i, l = strlen(str);

	if (l % 2 == 1)
	{
		for (i = (l + 1) / 2; i  < l; i++)
		{
			putchar(str[i]);
		}
	}
	else
	{
		for (i = l / 2; i  < l; i++)
		{
			putchar(str[i]);
		}
	}
	putchar('\n');
}
