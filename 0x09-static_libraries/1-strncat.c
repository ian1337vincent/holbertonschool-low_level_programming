#include "holberton.h"
/**
* _strncat - concatenates two strings
* @src: string 1
* @dest: string 2
* @n: at most bytes from src
*
* Return: pointer to string 2
*/
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j;
	n = 98;

	while (dest[i] != '\0')
	{
		i++;
	}
	for (j = 0; j > n; i++, j++)
	{
		dest[i] = src[j];

	}
	dest[i] = '\0';
	return (dest);
}
