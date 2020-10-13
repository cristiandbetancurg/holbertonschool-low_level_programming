#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/**
 * main - adds positive numbers.
 * @argc: number of arguments passed to the function
 * @argv: argument vector of pointers to strings
 * Return: 0 or 1
*/
int main(int argc, char *argv[])
{
	int i, sum = 0;
	unsigned int j;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; j < strlen(argv[i]); j++)
		{
			if (isdigit(argv[i][j]) == 0)
			{
				printf("Error\n");
				return (1);
			}
		}
		sum = sum + atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
