#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * op_add - a + b
 * @a: int
 * @b: int
 * Return: @a + @b
*/
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - a-b
 * @a: int
 * @b: int
 * Return: @a-@b
*/
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - a * b
 * @a: int
 * @b: int
 * Return: @a * @b
*/
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - a div b
 * @a: int
 * @b: int
 * Return: @a div @b
*/
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - a mod b
 * @a: int
 * @b: int
 * Return: @a mod @b
*/
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
