#include <stdio.h>
#include <string.h>
/**
 * print_array - print the values of an arrey
 * @a: the arrye
 * @n: number of values in arrye
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d, ", a[i]);
		if (i = n - 1)
		{
			printf("%d", a[i]);
		}
	}
	printf("\n");
}
