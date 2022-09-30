#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry
 * @argc: argument count
 * @argv: argument variable
 * Return: 0 for success and 1 in the event of argc < 2.
 */
int main(int argc, char *argv[])
{
	int mul;
	int a = atoi(argv[1]);
	int b = atoi(argv[2]);

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		mul = a * b;
		printf("%d\n", mul);
		return (0);
	}
}
