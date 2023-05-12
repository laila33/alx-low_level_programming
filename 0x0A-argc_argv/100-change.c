#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to
 * make change for an amount of money
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int x, i, y;
	int coin[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	x = atoi(argv[1]);
	y = 0;

	if (x < 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < 5 && x >= 0; i++)
	{
		while (x >= coin[i])
		{
			y++;
			x -= coin[i];
		}
	}

	printf("%d\n", y);
	return (0);
}
