#include <stdio.h>
/**
 * main - main
 * @argc: number of commad line
 * @argv: list of command passed
 * Return: number of command passed in command line
 */
int main(int argc, char **argv)
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
