#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars, initializes it with a specific char.
 * @c: The specific character to initialize the array with
 * @size: The size of the array to be initialized.
 *
 * Return: if size == 0 or function fails, Null
 *	   otherwise, apointer to the array.
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int index;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);

	for (index = 0; index < size; index++)
		array[index] = c;

	return (array);
}
