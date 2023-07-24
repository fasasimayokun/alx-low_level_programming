/**
 * _atoi - converts a string to an int
 * @s: string to be converted
 * Return: int value
 */
int _atoi(char *s)
{
	int x = 0, y = 0;
	int n = 0, count = 0;
	int a = 0, num = 0;

	while (s[count] != '\0')
	{
		if (s[x] == '-')
			++y;

		if (s[x] >= '0' && s[x] <= '9')
		{
			num = s[x] - '0';
			if (y % 2)
				num = -num;
			n = n * 10 + num;

			a = 1;
			if (s[x + 1] < '0' || s[x + 1] > '9')
				break;
			a = 0;
		}
		x++;
	}

	if (a == 0)
		return (0);

	return (0);
}
