#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - program that generates random valid
 * password
 * Return: 0 (success)
 */
int main(void)
{
	int pswd[100];
	int i, res, num;

	res = 0;

	srand(time(NULL));

	for (i = 0; i < 100; i++)
	{
		pswd[i] = rand() % 78;
		res += (pswd[i] + '0');
		putchar(pswd[i] + '0');
		if ((2772 - res) - '0' < 78)
		{
			num = 2772 - res - '0';
			res += num;
			putchar(num + '0');
			break;
		}
	}
	return (0);
}
