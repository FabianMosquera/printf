#include "holberton.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * _memcpy - Function that copies memory data
 * @dest: char
 * @src: char
 * @n: unsigned int
 * Return: char
 **/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = *src;
		src++;
	}
	return (dest);
}

/**
 * reverse = function reverse string.
 * @c = string resive.
 * Return = destiny.
**/

char reverse(char *c)
{
    int i,j;
    char *destiny;
    char aux;
    for (i = 0; c[i] != '\0'; i++)
    {
        
    }
    destiny = malloc(sizeof(char) * i + 1);
    
    if (destiny == '\0')
    {
        return(NULL);
    }
    
    _memcpy(destiny,c,i);

    for (j = 0; j < i ; j++, i--)
    {
        aux = destiny[i - 1];
        destiny[i - 1] = destiny[j];
        destiny[j] = aux;
    }
    return(destiny);
}

/**
* print_r - print reverse function
* @r: the list of arguments
* Return: number of printed elment
**/

int print_r(va_list r)
{
    int i;
    char *str,*ptr;

    str = va_arg(r,char *);
    if (str == NULL)
    {
        return(-1);
    }
    ptr = reverse(str);
    if (ptr  == NULL)
    {
        return(-1);
    }
    for ( i = 0; ptr[i] != '\0'; i++)
    {
        _putchar(ptr[i]);
    }
    free (ptr);
    return (i);
}