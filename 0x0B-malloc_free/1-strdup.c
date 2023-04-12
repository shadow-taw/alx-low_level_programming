#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - print copy of the string given as a parameter
 * @str: the string given
 * Return: NULL if str is NULL, a pointer otherways
 */
char *_strdup(char *str)
{
	char *s = malloc(sizeof(str));

	if (str == 0 || s == 0)
	{
		return (0);
	}
	else
	{
		s = str;
		return (s);
		free(s);
	}
}
