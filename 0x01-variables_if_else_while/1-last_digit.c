#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/**
* main - prints last digit and whether it is +, -, or =
*
* Return: 0
*/
/* betty style doc for function main goes there */
int main(void)
{
	int n, lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastDigit = n % 10;
	printf("Last digit of %d is %d and is", n, lastDigit);
	{
	if (lastDigit > 5)
		printf(" greater than 5\n");
	else if (lastDigit == 0)
		printf(" is 0\n");
	else if (lastDigit < 6 && n != 0)
		printf(" less than 6 and is not 0\n");
	}
	/* your code goes there */
	return (0);
}
