/**
 * _strlen - a function that returns the length of a string
 * @s: the string argument
 * Return: length of string
 */
int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count += 1;
		s++;
	}
	return (count);
}
