#include "main.h"

/**
 * * main - tests function that prints if integer is positive or negative
 * * Return: 0
 * */

int main(void)
{
	int i;

	i =0;
	test=positive_or_negative(i);
	if(test=="0 is zero"){
		printf("the function is working well");
	}else{
		printf("the function is't working");
	}

	return (0);
}
