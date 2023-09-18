#include "main.h"
/**
 * rot13_print - printf str to ROT13 place into buffer
 * @rot13:  arguments
 * Return: printed
 *
 */
int rot13_print(va_list rot13)
{
	int i;
	int j;
	int printed = 0;
	int k = 0;
	char *str = va_arg(rot13, char*);
	char original[] = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	char code[] = {"nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM"};

	if (str == NULL)
		str = "(null)";
	for (i = 0; str[i]; i++)
	{
		k = 0;
		for (j = 0; original[j] && !k; j++)
		{
			if (str[i] == original[j])
			{
				_putchar(code[j]);
				printed++;
				k = 1;
			}
		}
		if (!k)
		{
			_putchar(str[i]);
			printed++;
		}
	}
	return (printed);
}
