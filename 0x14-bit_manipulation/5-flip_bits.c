#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 * to get from one number to another
 * @a: first val
 * @b: second val
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int a, unsigned long int b)
{
	int i, count = 0;
	unsigned long int current;
	unsigned long int former = a ^ b;

	for (i = 63; i >= 0; i--)
	{
		current = former >> i;
		if (current & 1)
			count++;
	}

	return (count);
}
