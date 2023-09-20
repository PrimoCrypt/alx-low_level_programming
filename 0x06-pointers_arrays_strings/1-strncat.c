#include "main.h"

/**
 * _strncat - Concatenates two strings
 *
 * Return: 0
 *
 * @dest: pointer to the destination string
 * @src: pointer to the source string
 * @n: maximum number of bytes from src to concatenate
 */

char *_strncat(char *dest, char *src, int n)
{
	char *result = dest;

	while (*dest != '\0')
		dest++;
	while (*src != 0 && n > 0)
	{
		*dest = *src;
		src++;
		dest++;
		n--;
	}
	*dest = '\0';

	return (result);
}
