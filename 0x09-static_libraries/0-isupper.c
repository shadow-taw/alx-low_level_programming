#include <ctype.h>
/**
 * _isupper - check if letter is uppercase
 * @c: a letter
 * Return: return 1 if upercase. 0 otherways
 */
int _isupper(int c)
{
	c = isupper(c);
	if (c > 0)
	{
		return (1);
	}
	return (c);
}
