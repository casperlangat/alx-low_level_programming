#include "main.h"

/**
 * create_array - array to prints a string
 * numbers elements array
 * @size: size of array
 * @c: char
 * Return: pointer
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for  (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}
