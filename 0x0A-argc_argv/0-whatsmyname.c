#include <stdio.h>
/**
 * main - block to print the name of the file
 * @argc: number of arguments passed to the function
 * @argv: argument vector of pointers to strings
 * Return: 0 Always
*/
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
