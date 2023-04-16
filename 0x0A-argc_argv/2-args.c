#include <stdio.h>
/**
 * main - test
 * @argc: argc
 * @argv: argv
 * Return: the argument in commad line
 */
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
