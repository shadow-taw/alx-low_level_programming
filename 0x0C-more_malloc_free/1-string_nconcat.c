#include <stdlib.h>
#include "main.h"
/**
 * string_nconcat - contains s1 followed by the first n bytes of s2
 * @s1: first string
 * @s2: 2end string
 * @n: the last numbers of s2
 * Return: s1 folowed by s2 wiyhot the n last character
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i, l, m, j;

	for (l = 0; s1[l] != '\0'; l++)
	;
	for (m = 0; s2[m] != '\0'; m++)
	;
	char *s = malloc(l + m + 1);

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		s[i] = s1[i];
	}
	for (j = 0; j < n; j++)
	{
		s[i] = s2[j];
		i++;
	}
	s[i] = '\0';
	return (s);
}
