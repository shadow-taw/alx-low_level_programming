#include <ctype.h>
/**
 * _isdigit - check if letter is uppercase
 * @c: a letter or a digit
 * Return: return 1 if digit. 0 if letter
 */
int _isdigit(int c)
{
	c = isdigit(c);
	if (c != 0)
	{
		return (1);
	}
	return (c);
}
