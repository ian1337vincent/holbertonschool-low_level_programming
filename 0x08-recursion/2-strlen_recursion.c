#include "holberton.h"
/**
* _strlen_recursion - returns length of string
* @s: string
*/
int _strlen_recursion(char *s)
{
	int len = 0;
	if (*s != '\0')
	{
		len++;
		s++;
	}
	if (*s < 0)
	{
		_strlen_recursion(s);
	}
	return (len);
}
