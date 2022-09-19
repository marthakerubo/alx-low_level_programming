#include "main.h"

/**
 * swap_int -swaps the vzlue of wo intgers
 * @a: int 1
 * @b: int 2
 * Return: void
 */
void  swap_int(int *a, int b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
