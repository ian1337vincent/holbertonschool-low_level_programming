#include "holberton.h"
/**
* print_alphabet_x10 - prints the alphabet 10x,
* in lowercase, followed by a newline
*
*/
void print_alphabet_x10(void)
{
	char c;
	int d;

	d = 0;
	for (; d < 10 ; d++)
	{

		c = 'a';
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
	}
}
