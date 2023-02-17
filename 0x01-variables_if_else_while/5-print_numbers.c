#include <stdio.h>
#include <unistd.h>
/**
 * main -Entry point
 * Description: prints allsingle digit numbers of
 * base ten starting from zero
 * Return: Always 0 (success)
 */
int main(void)
{
	int m;

	for (m = 0; m < 10; m++)
	{
		printf("%d", m);
	}
	putchar('\n');
	return (0);
}
