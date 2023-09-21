#include "main.h"

/**
 * _strncpy - Copies a string to another
 *
 * Return: 0
 * @dest: pointer to the destination data
 * @src: pointer to the source data
 * @n: the number of bytes available to copy
 */

char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}

	return (dest);
}

