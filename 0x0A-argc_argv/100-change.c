#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the minimum number of coins to make change
 * @argc: number of arguments passed to the function
 * @argv: argument vector of pointers to strings
 * Return: 0 or 1
*/
int main(int argc, char *argv[])
{
	int money, a = 0, i;
	int coin[5] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	money = atoi(argv[1]);
	if (money <= 0)
	{
		printf("0\n");
		return (1);
	}
	else
	{
		for (i = 0; i < 5; i++)
		{
			if (money >= coin[i])
			{
				a = a + (money / coin[i]);
				money = money % coin[i];
			}
			if (money == 0)
			{
				printf("%d\n", a);
				return (0);
			}
		}
	}
	return (0);
}
