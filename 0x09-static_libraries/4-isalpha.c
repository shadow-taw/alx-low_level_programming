#include <stdio.h>
#include <ctype.h>
/**
 * _isalpha - check if it's an alphabet or character
 * @c: an alphabet or an integer
 *
 * Return: 1 if lower case. 0 if not
 */
int _isalpha(int c)
{
	int i;

	i = isalpha(c);
	if (i > '0')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
