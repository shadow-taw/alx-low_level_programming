#include <stdio.h>
#include <ctype.h>
/**
 * _islower - check if lower
 * @c: an alphabet
 *
 * Return: 1 if lower case. 0 if not
 */
int _islower(int c)
{
	int i;

	i = islower(c);
	if (i > '0')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
