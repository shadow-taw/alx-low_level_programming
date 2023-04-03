#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * print_rev - reverse any kind of string
 * @s: the string
 */
void print_rev(char *s)
{
	    int i, len = strlen(s);

	for (i = len - 1; i >= 0; i--)
	{
		putchar(s[i]);
		putchar('\n');
	}
}
