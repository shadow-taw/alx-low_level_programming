#include <stdio.h>
/**
 * swap_int - swipe the value of to numbers
 * @a: the first number
 * @b: the 2ed number
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
