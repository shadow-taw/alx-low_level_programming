#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * create_array - creates an array of chars,initializes it with a char
 * @size: the size of array
 * @c: the char
 * Return: NULL if size is NULL, pointer oyherways
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *p = malloc(size);

	if (size != 0)
	{
		for (i = 0; i < size; i++)
		{
			p[i] = c;
		}
		if (p == NULL)
		{
			fprintf(stderr, "not enough memory left!\n");
			return (1);
		}
		return (p);
		free(p);
	}
	else
		return (NULL);
}
