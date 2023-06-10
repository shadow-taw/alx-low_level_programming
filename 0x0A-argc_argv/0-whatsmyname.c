#include <stdio.h>
/**
 * main - print it's name
 * @argc: number of line in command line
 * @argv: list of command line entred
 * Return: return name of programme
 */
int main(int argc, char **argv)
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
