#include <stdio.h>

/**
 * main - fizz buzz program
 *
 * Description: substitutes fizz and buzz for certain numbers
 * Return: 0
 */
int main(void)
{
	int a;

	for (a = 1 ; a <= 100 ; a++)
	{
		if (a % 3 == 0)
			printf("Fizz");
		else if (a % 5 == 0)
			printf("Buzz");
		else if (a % 15 == 0)
			printf("FizzBuzz");
		else
			printf("%d", a);
		printf(" ");
	}
	putchar('\n');
	return (0);
}
