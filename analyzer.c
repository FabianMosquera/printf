
#include "holberton.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * validate - Function that go through the different modules of the printf
 * @format: const char
 * @f_list: pter_l
 * @arg_list: va_list
 * Return: integer
 */
int validate(const char *format, pter_l f_list[], va_list arg_list)
{
	int i, j, k_val, print_all;

	print_all = 0;
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			for (j = 0; f_list[j].ptr != NULL; j++)
			{
				if (format[i + 1] == f_list[j].ptr[0])
				{
					k_val = f_list[j].ptr_int(arg_list);
					if (k_val == -1)
						return (-1);
					print_all += k_val;
					break;
				}
			}
			if (f_list[j].ptr == NULL && format[i + 1] != ' ')
			{
				if (format[i + 1] != '\0')
				{
					write_c(format[i]);
					write_c(format[i + 1]);
					print_all = print_all + 2;
				}
				else
					return (-1);
			}
			i = i + 1;
		}
		else
		{
			write_c(format[i]);
			print_all++;
		}
	}
	return (print_all);
}
