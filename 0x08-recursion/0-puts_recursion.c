#include <stdio.h>
/**
 * _puts_recursion - print the string
 * @s: the string
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar('\n');
		return;
	}
	putchar(*s);
	_puts_recursion(s + 1);
}