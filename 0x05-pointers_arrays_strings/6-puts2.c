#include <stdio.h>
#include <string.h>
/**
 * puts2 -  prints every other character of a string,
 * @str: the string
 */
void puts2(char *str)
{
	int i, l = strlen(str);

	for (i = 0; i  < l;  i += 2)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
