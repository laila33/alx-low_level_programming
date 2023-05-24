#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints its own opcodes
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int x, i;
	char *b;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	x = atoi(argv[1]);

	if (x < 0)
	{
		printf("Error\n");
		exit(2);
	}

	b = (char *)main;

	for (i = 0; i < x; i++)
	{
		if (i == x - 1)
		{
			printf("%02hhx\n", b[i]);
			break;
		}
		printf("%02hhx ", b[i]);
	}
	return (0);
}
