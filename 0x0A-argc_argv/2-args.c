#include <stdio.h>
/**
 * main - main
 * @argc: number of commad line
 * @argv: list of command passed
 * Return: print all command passed in command line one by one
 */
int main(int argc, char **argv)
{
	int i;

	for (i = 1; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
