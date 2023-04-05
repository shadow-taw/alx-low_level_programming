#include <stdio.h>
#include <string.h>
/**
 * _strcpy - opies the string pointed by src to anthor var pointed by dest
 * @dest: the second pointer
 * @src: the first pointer
 * Return: the pointer dest
 */
char *_strcpy(char *dest, char *src)
{
	*dest = *src;
	return (dest);
}
