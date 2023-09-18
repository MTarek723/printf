#include "main.h"
/**
 * exclusive_str_print - print exclusuives string.
 * @exc: argumen t.
 * Return: the length of the string.
 */

int exclusive_str_print(va_list exc)
{
	char *str;
	int i;
	int len = 0;
	int x;

	str = va_arg(exc, char *);
	if (str == NULL)
		str = "(null)";
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] < 32 || str[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			len = len + 2;
			x = str[i];
			if (x < 16)
			{
				_putchar('0');
				len++;
			}
			len = len + hex_exc(x);
		}
		else
		{
			_putchar(str[i]);
			len++;
		}
	}
	return (len);
}
