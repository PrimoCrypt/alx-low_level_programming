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
	char *result = dest;

	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		src++;
		dest++;
		n--;
	}
	*dest = '\0';

	return (result);
}
