#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - print copy of the string given as a parameter
 * @str: the string given
 * Return: NULL if str is NULL, a pointer otherways
 */
char *_strdup(char *str)
{
	if (str != NULL)
	{
		char *s = malloc(sizeof(char));

		s = str;
		return (s);
	}
	else
	{
		return (0);
	}
}
