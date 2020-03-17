#include "holberton.h"

/**
 * print_number - Print the integers
 * @args: arguments that enter in the function
 * Return: integer
 */
int print_number(va_list args)
{
	int n;
	int len = 0;
	unsigned int num;
	int div = 1;

	n = va_arg(args, int);
	if (n < 0)
	{
		len += _putchar('-');
		num = n * -1;
	}
	else
		num = n;
	for (; num / div > 9 ;)
		div *= 10;
	for (; div != 0 ;)
	{
		len += _putchar('0' + num / div);
		num %= div;
		div /= 10;
	}
	return (len);
}
/**
 * print_unsigned_number - Print the unsigned integers
 * @n: unsigned int
 * Return: integer
 */
int print_unsigned_number(unsigned int n)
{
	int len = 0;
	unsigned int num = n;
	int div = 1;

	for (; num / div > 9 ;)
		div *= 10;
	for (; div != 0 ;)
	{
		len += _putchar('0' + num / div);
		num %= div;
		div /= 10;
	}
	return (len);
}
