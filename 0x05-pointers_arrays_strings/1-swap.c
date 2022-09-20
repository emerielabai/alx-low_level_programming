#include "main.h"

/**
 * swap_int - swaps the values of two intigers
 * @a: pointer to first value
 * @b: pointer to second value
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
