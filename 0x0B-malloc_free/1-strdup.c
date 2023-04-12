#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - print copy of the string given as a parameter
 * @str: the string given
 * Return: NULL if str is NULL, a pointer otherways
 */
char *_strdup(char *str)
{
	if (str != 0)
	{
		char *s = malloc(sizeof(char));

		s = str;
		if (s == 0)
		{
			return (0);
		}
		else
		{
			return (s);
			free(s);
		}
	}
	else
	{
		return (0);
	}
}
