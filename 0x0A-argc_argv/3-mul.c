#include <stdio.h>
#include <stdlib.h>
/**
 * main - main
 * @argc: number of commad line
 * @argv: list of command passed
 * Return: print the multiplication of two numbers
 */
int main(int argc, char **argv)
{
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}
	return (0);
}
