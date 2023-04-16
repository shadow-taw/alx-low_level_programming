#include <stdio.h>
#include <stdlib.h>
/**
 * main - test
 * @argc: argc
 * @argv: argv
 * Return: multiplication of tow numbers
 */
int main(int argc, char **argv)
{
	(void)argc;
	if (argc < 3 || argc > 3)
	{
		printf("Error");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
