/**
 * swap_int - Swap the value a and b point to
 * @a: first pointer
 * @b: second pointer
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
