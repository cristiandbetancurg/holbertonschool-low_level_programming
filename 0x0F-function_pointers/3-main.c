#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - performs simple operations
 * @argc: counter
 * @argv: vector
 * Return: always 0
*/
int main(int argc, char *argv[])
{
	int a, b, result;
	int (*op_func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	op_func = get_op_func(argv[2]);
	b = atoi(argv[3]);
	if (op_func == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	result = op_func(a, b);
	printf("%d\n", result);
	return (0);
}
