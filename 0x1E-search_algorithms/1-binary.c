#include "search_algos.h"

/**
  * binary_search - Searches for a value in a sorted array
  *                 of integers using binary search.
  * @array: A pointer to the first element of the array to search.
  * @size: The number of elements in the array.
  * @value: The value to search for.
  *
  * Return: If the value is not present or the array is NULL, -1.
  *         Otherwise, the index where the value is located.
  *
  * Description: Prints the [sub]array being searched after each change.
  */
int binary_search(int *array, size_t size, int value)
{
	size_t i, inital_value, final_value;

	if (!array || array == NULL)
		return (-1);

	for (inital_value = 0, final_value = size - 1; final_value >= inital_value;)
	{
		printf("Searching for value in array: ");
		for (i = inital_value; i < final_value; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		i = inital_value + (final_value - inital_value) / 2;
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			final_value = i - 1;
		else
			inital_value = i + 1;
	}

	return (-1);
}
