#include <stdio.h>
/**
 * main -  fizzbuzz programme
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
		{
		printf("Fizz");
		}
		if (i % 5 == 0)
		{
			printf("Buzz");
		}
		if (i % 5 != 0 && i % 3 != 0)
		{
			printf("%d", i);
		}
			printf(" ");
		}
	printf("\n");
	return (0);
}
