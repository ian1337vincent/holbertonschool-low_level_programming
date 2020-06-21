#include <stdio.h>
/**
* main - prints all possible combos of 0-9
*
* Return: 0
*/
int main(void)
{
	int digit = '0';
	int comma = ',';
	int space = ' ';

	while (digit <= '8')
	{
		putchar(digit);
		putchar(comma);
		putchar(space);
		digit++;
	}
	putchar('9');
	return (0);
}
