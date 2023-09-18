#include "main.h"
/**
 * hexlow_print - prints an hexgecimal number in lower cases.
 * @low: arguments.
 * Return: counter.
 */
int hexlow_print(va_list low)
{
	int i;
	int *array;
	int counter = 0;
	unsigned int x = va_arg(low, unsigned int);
	unsigned int y = x;

	while (x / 16 != 0)
	{
		x /= 16;
		counter++;
	}
	counter++;
	array = malloc(counter * sizeof(int));

	for (i = 0; i < counter; i++)
	{
		array[i] = y % 16;
		y /= 16;
	}
	for (i = counter - 1; i >= 0; i--)
	{
		if (array[i] > 9)
			array[i] = array[i] + 39;
		_putchar(array[i] + '0');
	}
	free(array);
	return (counter);
}
