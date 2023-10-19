#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - check the code for Holberton School students.
 * @leo_list: The name of the list
 *
 * Return: the number of nodes.
 */

size_t print_list(const list_t *leo_list)
{
	int count = 0;

	while (leo_list)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", leo_list->len, leo_list->str);
		}
		count++;
		leo_list = leo_list->next;
	}
	return (count);
}
