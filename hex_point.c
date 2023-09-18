#include "main.h"
/**
 * hex_point - prints an hexgecimal number.
 * @point: arguments.
 * Return: counter.
 */
int hex_point(unsigned long int point)
{
	long int i;
	long int *array;
	long int counter = 0;
	unsigned long int x = point;

	while (point / 16 != 0)
	{
		point /= 16;
		counter++;
	}
	counter++;
	array = malloc(counter * sizeof(long int));

	for (i = 0; i < counter; i++)
	{
		array[i] = x % 16;
		x /= 16;
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
