#include <stdio.h>
#include "sort.h"

/**
 * bubble_sort - function that does sorting using
 * bubble sort.
 * @array: array to be sorted.
 * @size: size of array to be sorted.
 */

void bubble_sort(int *array, size_t size)
{
	loop_utils(array);
}

/**
 * loop_utils - looping and swaping function
 * @array: int array to be looped.
 */

void loop_utils(int *array)
{
	int len, i, temp, checker;

	len = sizeof(array) / sizeof(array[0]);
	checker = 0;

	for (i = 0; i < len; i++)
	{
		if (array[i] < array[i + 1])
		{
			checker = 1;
			/*swapping*/
			temp = array[i];
			array[i] = array[i + 1];
			array[i + 1] = temp;

			/**print array**/
			print_array(array, len);
		}
		/*check to see if there us need to come back again*/
		if ((i == len - 1) && checker == 1)
			loop_utils(array);

		checker = 0;
	}
}
