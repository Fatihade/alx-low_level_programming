#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 * @s1: the first string to be concatenated.
 * @s2: the second string to be concatenated.
 * Return: If concatenation fails - NULL.
 *          Otherwise - a pointer the newly-allocated space in memory
 *                     containing the concatenated strings.
 */
char *str_concat(char *s1, char *s2)
{
	char *newstr, *temp;
	unsigned int size, size1 = 0, size2 = 0;

	if (!s1)
		s1 = "";
	else
		while (*(s1 + size1++))
			;

	if (!s2)
		s2 = "";
	else
		while (*(s2 + size1++))
			;

	size = size1 + size2 - 1;
	newstr = malloc(size * sizeof(char));

	if (!newstr)
		return (NULL);

	temp = newstr;
	while (*s1)
		*temp++ = *s1++;

	while (*s2)
		*temp++ = *s2++;

	return (newstr);
}
