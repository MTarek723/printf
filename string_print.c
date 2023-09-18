#include "main.h"
/**
 * string_print - print a string.
 * @s: argumen t.
 * Return: the length of the string.
 */
int string_print(va_list s)
{
	char *str;
	int i, len;

	str = va_arg(s, char *);
	if (str == NULL)
	{
		str = "(null)";
		len = _strlen(str);
		for (i = 0; i < len; i++)
			_putchar(str[i]);
		return (len);
	}
	else
	{
		len = _strlen(str);
		for (i = 0; i < len; i++)
			_putchar(str[i]);
		return (len);
	}
}
/**
 * _strlen - Returns the lenght of a string.
 * @str: Type char pointer
 * Return: c.
 */
int _strlen(char *str)
{
	int x;

	for (x = 0; str[x] != 0; x++)
	;
	return (x);
}
/**
 * _strlenc - Strlen function but applied for constant char pointer s
 * @s: Type char pointer
 * Return: c
 */
int _strlenc(const char *s)
{
	int c;

	for (c = 0; s[c] != 0; c++)
		;
	return (c);
}
