/**
 * swap_int - swaps the value of two intergers
 * @a: The first integer to be swapped
 * @b: The second integer to be swapped
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
