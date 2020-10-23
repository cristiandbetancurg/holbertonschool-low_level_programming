#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the opcodes of its own main function
 * @argc: counter
 * @argv: vector
 * Return: always O
*/
int main(int argc, char **argv)
{
	int n, i;
	char *charg;

	if (argc != 2)
	{
		puts("Error\n");
		exit(1);
	}
	n = atoi(argv[1]);
	if (n < 0)
	{
		puts("Error\n");
		exit(2);
	}
	charg = (char *)main;
	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			printf("%.2hhx", charg[i]);
			if (i < n - 1)
				printf(" ");
		}
	}
	printf("\n");
	return (0);
}
