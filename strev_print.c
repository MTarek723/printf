#include "main.h"
/**
 * strev_print - function that prints a string in reverse
 * @rev: arguments
 *
 * Return: the string
 */
int strev_print(va_list rev)
{
	char *str = va_arg(rev, char*);
	int i;
	int j = 0;

	if (str == NULL)
	{
		str = "(null)";
	}
	while (str[j] != '\0')
	{
		j++;
	}
	for (i = j - 1; i >= 0; i--)
	{
		_putchar(str[i]);
	}
	return (j);
}
