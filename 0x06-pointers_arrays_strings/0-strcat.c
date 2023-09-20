#include "main.h"

/**
 * _strcat - Concatenates two strings
 * @dest: pointer to the dest string
 * @src: pointer to the drc string
 *
 * Return: 0
 */

char *_strcat(char *dest, char *src)
{
	char *result = dest;

	while (*dest != '\0')
		dest++;
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';

	return (result);
}
