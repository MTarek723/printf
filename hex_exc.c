#include "main.h"
/**
 * hex_exc - prints an hexgecimal number.
 * @hexx: number to print.
 * Return: counter.
 */
int hex_exc(unsigned int hexx)
{
	int i;
	int *array;
	int counter = 0;
	unsigned int x = hexx;

	while (hexx / 16 != 0)
	{
		hexx /= 16;
		counter++;
	}
	counter++;
	array = malloc(counter * sizeof(int));

	for (i = 0; i < counter; i++)
	{
		array[i] = x % 16;
		x /= 16;
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
