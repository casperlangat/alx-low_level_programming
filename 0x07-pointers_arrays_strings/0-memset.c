#include "main.h"

/**
 * _memset  - fills the first n bytes of memory area
 * @s: A pointer to the memory area to be filled
 * @b: the character to fill the memory area
 * @n: The number of to be filled
 * Return: A pointer to the filled memory area @s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index;
	unsigned char *memory = s, value = c;

	for (index = 0; index < n; index++)
		memory[index] = value;

	return (memory);
}
