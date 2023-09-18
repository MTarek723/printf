#include "main.h"
/**
 * bi_print - prints a binary number.
 * @bi: arguments.
 * Return: binary length.
 */
int bi_print(va_list bi)
{
	int x = 0;
	int y = 0;
	int i;
	int a = 1;
	int b;
	unsigned int num = va_arg(bi, unsigned int);
	unsigned int pi;

	for (i = 0; i < 32; i++)
	{
		pi = ((a << (31 - i)) & num);
		if (pi >> (31 - i))
			x = 1;
		if (x)
		{
			b = pi >> (31 - i);
			_putchar(b + 48);
			y++;
		}
	}
	if (y == 0)
	{
		y++;
		_putchar('0');
	}
	return (y);
}
