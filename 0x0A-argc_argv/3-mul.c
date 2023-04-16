#include <stdio.h>
#include <stdlib.h>
/**
 * main - test
 * @argc: argc
 * @argv: argv
 * Return: multiplication of to numbers
 */
int main(int argc, char **argv)
{
	(void)argc;
	printf("%d\n", atoi(argv[1]) - atoi(argv[2]));
	return (0);
}
