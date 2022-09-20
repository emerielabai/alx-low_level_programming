#include "main.h"

/**
 * rev_string - function that reverses a string
 * @s: string to reverse
 * Return: void
 */

void rev_string(char *s)
{
	int j;

	i = 0;
	while (*(s + i))
	{
		i++;
	}
	i--;
	j = 0;
	while (i > j)
	{
		rev(s + i, s + j);
		j++;
		i--;
	}

}
