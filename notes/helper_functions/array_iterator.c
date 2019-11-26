/**
 * array_iterator - executes function given as parameter
 * @array: where parameters are given to
 * @size: size of array
 * @action: pointer to function being used
 * Return: 0
 */
#include "holberton.h"
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int l;

	if (array == NULL || (*action) == NULL || size <= 0)
		return;
	for (l = 0; l < size; l++)
		(*action)(array[l]);
}
