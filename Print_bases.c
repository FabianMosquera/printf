#include "holberton.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
* print_b - convert an integer to binary
* @b: the list of arguments
* Return: number of printed elment
**/

int print_b(va_list b)
{
unsigned int binary [32];
unsigned int n = 0, count = 0;
int i = 0;

n = va_arg(b,unsigned int);
if (n <= 1)
{
    _putchar(n + '0');
    count ++;
}
else
{
    while (n > 0)
    {
        binary [i] = n % 2;
        n = n / 2;
        i++;
    }
    for (i = i - 1; i >= 0; i--)
    {
        _putchar(binary[i] + '0');
        count++;
    }
}
return(count);
}

/**
* print_o - prints an octal
* @o: the list of arguments
* Return: number of printed characters
*/
int print_o(va_list o)
{
    unsigned int octal [16];
    unsigned int n = 0, count = 0;
    int i;

n = va_arg(o,unsigned int);
if (n == 0)
{
    _putchar( 0 + '0');
    count ++;
}
else
{
    while (n > 0)
    {
        octal [i] = n % 8;
        n = n / 8;
        i++;
    }
    for (--i; i>=0; i--)
    {
        _putchar(octal[i] + '0');
        count++;
    }
}
return(count);
}

/**
* print_X - prints input integer to an hexadecimal in uppercase
* @X: the list of arguments
* Return: number of printed characters
*/

int print_X(va_list X)
{
    char hex [16];
    unsigned int n = 0, count = 0;
    int i = 0;

n = va_arg(X,unsigned int);
if (n == 0)
{
    _putchar( 0 + '0');
    count ++;
}
   while (n > 0)
   {
       if (n % 16 >= 10 && n % 16 <= 15)
       {
           hex[i] = 55 + n % 16;
       }
       else
       {
           hex[i] = 48 + n % 16;
       }
       n = n/16;
       i++;
   }
   for (--i; i >= 0; i--)
    {
        _putchar(hex[i]);
        count++;
    } 
return(count);
}

/**
* print_x - prints input integer to an hexadecimal in lowercase
* @X: the list of arguments
* Return: number of printed characters
*/

int print_x(va_list x)
{
    char hex [16];
    unsigned int n = 0, count = 0;
    int i = 0;

n = va_arg(x,unsigned int);
if (n == 0)
{
    _putchar( 0 + '0');
    count ++;
}
   while (n > 0)
   {
       if (n % 16 >= 10 && n % 16 <= 15)
       {
           hex[i] = 87 + n % 16;
       }
       else
       {
           hex[i] = 48 + n % 16;
       }
       n = n/16;
       i++;
   }
   for (--i; i >= 0; i--)
    {
        _putchar(hex[i]);
        count++;
    } 
return(count);
}