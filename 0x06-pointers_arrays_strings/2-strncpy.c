#include "main.h"
#include <stdio.h>
/**
 * _strncpy - this function copies a string
 * @dest: input a value
 * @src: input a value
 * @n: input a value
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}

