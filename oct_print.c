#include "main.h"
/**
 * oct_print - prints an octal number.
 * @oct: arguments.
 * Return: counter.
 */
int oct_print(va_list oct)
{
	int i;
	int *array;
	int counter = 0;
	unsigned int x = va_arg(oct, unsigned int);
	unsigned int y = x;

	while (x / 8 != 0)
	{
		x /= 8;
		counter++;
	}
	counter++;
	array = malloc(counter * sizeof(int));

	for (i = 0; i < counter; i++)
	{
		array[i] = y % 8;
		y /= 8;
	}
	for (i = counter - 1; i >= 0; i--)
	{
		_putchar(array[i] + '0');
	}
	free(array);
	return (counter);
}
