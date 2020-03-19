#include "holberton.h"

/**
 * _putchar - Function that writes the character c
 * @c: char
 * Return: integer
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
