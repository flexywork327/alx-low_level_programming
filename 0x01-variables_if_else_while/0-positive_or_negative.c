#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
	printf("is positive");
	}
	if (n == 0)
	{
	printf("is zero");
	}
	if (n < 0)
	{
	printf("is negative");
	}
	return (0);
}
