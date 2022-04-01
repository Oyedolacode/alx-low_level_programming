#include <stdio.h>
#include "main.h"
/**
 *main - main
 *Return: zero
 *@argc: variable
 *@argv: variable
 */
int main(int argc, char *argv[])
{
int mul;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		int x = atoi(argv[1]);
		int y = atoi(argv[2]);

		mul = x * y;
		printf("%d\n", mul);
	}
	return (0);
}
