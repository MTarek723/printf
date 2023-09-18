#include "main.h"
/**
 * hexup_print - prints an hexgecimal number.
 * @upp: arguments.
 * Return: counter.
 */
int hexup_print(va_list upp)
{
	int i;
	int *array;
	int counter = 0;
	unsigned int x = va_arg(upp, unsigned int);
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
			array[i] = array[i] + 7;
		_putchar(array[i] + '0');
	}
	free(array);
	return (counter);
}
