#include "main.h"
/**
 * int_print - prints integer
 * @in: argument to print
 * Return: number of characters printed
 */
int int_print(va_list in)
{
	int x = va_arg(in, int);
	int num;
	int lst = x % 10;
	int digit;
	int y = 1;
	int  i = 1;

	x = x / 10;
	num = x;

	if (lst < 0)
	{
		_putchar('-');
		num = -num;
		x = -x;
		lst = -lst;
		i++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			y = y * 10;
			num = num / 10;
		}
		num = x;
		while (y > 0)
		{
			digit = num / y;
			_putchar(digit + '0');
			num = num - (digit * y);
			y = y / 10;
			i++;
		}
	}

	_putchar(lst + '0');

	return (i);
}
