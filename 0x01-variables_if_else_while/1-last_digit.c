#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 * To assign a random number to the variable n each time it is executed
 * Return: 0 always (Success)
 */
int main(void)
{
	int n;

	int num1;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	num1 = (n % 10);
	/* your code goes there */
	if (num1 > 5)
	printf("Last digit of %d is %d and is greater than 5\n", n, num1);
	else if (num1 == 0)
		printf("Last digit of %d is %d and is 0\n", n, num1);
	else if (num1 < 6)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, num1);
	return (0);

