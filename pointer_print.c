#include "main.h"
/**
 * pointer_print - prints an address.
 * @point: arguments.
 * Return: counter.
 */
int pointer_print(va_list point)
{
	void *ptr;
	char *str = "(nil)";
	long int a;
	int b;
	int i;

	ptr = va_arg(point, void*);
	if (ptr == NULL)
	{
		for (i = 0; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
		return (i);
	}

	a = (unsigned long int)ptr;
	_putchar('0');
	_putchar('x');
	b = hex_point(a);
	return (b + 2);
}
