#include <stdioh>
#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: the character to print 
 * Return: on sucess 1.
 * On error, -1 is returnrd and errno is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
