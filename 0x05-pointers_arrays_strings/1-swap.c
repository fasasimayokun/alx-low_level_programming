/**
 * swap_int - a function that swaps the values of two integers
 * @a: a pointer argument
 * @b: a 2nd pointer argument
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
