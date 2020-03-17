#include "holberton.h"

/**
 * _printf - Writes the C string pointed by format to the standard output
 * @format: const char
 * Return: integer
 */
int _printf(const char *format, ...)
{
	int save;
	pter_l f_list[] = {
		{"c", print_c},
		{"s", print_s},
		{"d", print_i},
		{"%", print_percent},
		{"i", print_i},
		{"b", print_b},
		{"r", print_r},
		/*{"R", print_R},*/
		{"u", print_u},
		{"o", print_o},
		{"x", print_x},
		{"X", print_X},
	};
	va_list arg_list;
	if (format == NULL)
		return(-1);
	va_start(arg_list, format);
	save = analyzer(format, f_list, arg_list);
	va_end(arg_list);

	return (save);
}
