#include <stdlib.h>
#include <stdio.h>
/**
 * main - a function that prints its own opcodes
 * @argc: argument count
 * @argv: argument array values
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	int byt, a;
	char *arr;

	if (argc != 2)
	{
		printf("ERROR\n");
		exit(1);
	}

	byt = atoi(argv[1]);

	if (byt < 0)
	{
		printf("ERROR\n");
		exit(2);
	}

	arr = (char *)main;

	for (a = 0; a < byt; a++)
	{
		if (a == byt - 1)
		{
			printf("%02hhx\n", arr[a]);
			break;
		}

		printf("%02hhx", arr[x]);
	}
	return (0);
}
