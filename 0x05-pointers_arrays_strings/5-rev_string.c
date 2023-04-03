#include <stdio.h>
#include <string.h>
/**
 * rev_string - reverse any kind of string v2
 * @s: the string
 */
void rev_string(char *s)
{
	int i, l = strlen(s);
	char t;

	for (i = 0; i < l / 2; i++)
	{
		t = s[i];
		s[i] = s[l - i - 1];
		s[l - i - 1] = t;
	}
}
