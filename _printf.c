#include "main.h"
/**
 * _printf - is a function that selects the correct function to print.
 * @format: identifier to look for.
 * Return: printed characters number.
 */
int _printf(const char * const format, ...)
{
	match_function fc[] = {
		{"%s", string_print}, {"%c", char_print}, {"%%", percent_print},
		{"%i", int_print}, {"%d", deci_print}, {"%r", strev_print},
		{"%R", rot13_print}, {"%b", bi_print}, {"%u", unsigned_print},
		{"%o", oct_print}, {"%x", hexlow_print}, {"%X", hexup_print},
		{"%S", exclusive_str_print}, {"%p", pointer_print}
	};

	va_list x;
	int y = 0, z, printed = 0;

	va_start(x, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

Here:
	while (format[y] != '\0')
	{
		z = 13;
		while (z >= 0)
		{
			if (fc[z].spcfir[0] == format[y] && fc[z].spcfir[1] == format[y + 1])
			{
				printed += fc[z].f(x);
				y = y + 2;
				goto Here;
			}
			z--;
		}
		_putchar(format[y]);
		printed++;
		y++;
	}
	va_end(x);
	return (printed);
}
