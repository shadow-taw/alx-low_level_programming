#include <stdio.h>
/**
 * main -  fizzbuzz programme
 * Return: 0
 */
int main(void)
{
	int i;
	int c = 100;

	for (i = 1; i <= c; i++)
	{
		if (i % 5 == 0 && i % 3 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", i);
		}
	}
	printf("\n");
	return (0);
}
