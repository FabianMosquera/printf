#include "holberton.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

int print_b(va_list b)
{
unsigned int binary [32];
unsigned int n = 0, count = 0;
int i = 0;

n = va_arg(b,unsigned int);
if (n > 0)
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
    for (i = i-1; i>=0; i--)
    {
        _putchar(binary[i] + '0');
        count++;
    }
}
return(count);
}


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

int print_x(va_list x)
{
    unsigned int hex [20];
    unsigned int n = 0, count = 0;
    int i;

n = va_arg(x,unsigned int);
if (n == 0)
{
    _putchar( 0 + '0');
    count ++;
}
else
{
   while (n > 0)
   {
       if (n >= 10 && n <= 15)
       {
           hex[i] = 55 + n;
       }
       else
       {
           hex[i] = 48 + n;
       }
       n = n/16;
       i++;
   }
   for (--i; i>=0; i--)
    {
        _putchar(hex[i]);
        count++;
    } 
}
return(count);
}
