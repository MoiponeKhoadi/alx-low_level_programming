#include<stdio.h>
/**
 * main -  prints all possible combinations of single-digit numbers
 * Return: 0 Successful
 */
int main(void)
{
	int num;

	for (num = 48; num < 58; num++)
	{
		putchar(num);
		if (num != 57)
		{
			putchar(',');
			putchar(' );
		}
	}
	putchar('\n');
	return (0);
}
