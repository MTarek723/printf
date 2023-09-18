#include "main.h"
/**
 * char_print - prints a char.
 * @c: arguments.
 * Return: 1.
 */
int char_print(va_list c)
{
	char str;

	str = va_arg(c, int);
	_putchar(str);
	return (1);
}
