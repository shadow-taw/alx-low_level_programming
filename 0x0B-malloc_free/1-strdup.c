#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - return a copy of the string given as a parameter
 * @str: the string given
 * Return: NULL if str is NULL, a pointer otherways
 */
char *_strdup(char *str)
{
	int l, i;
	char *s;

		if (str == NULL)
		{
			return (NULL);
		}
		l = strlen(str);
		s = malloc(sizeof(char) * l + 1);
		if (s == NULL)
		{
			return (NULL);
		}
		else
		{
		for (i = 0; i < l; i++)
		{
			s[i] = str[i];
		}
		return (s);
	}
}
