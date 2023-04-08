#include <stdio.h>

void draw(int height);

int main(void)
{
	int number;

	printf("Enter the height of the pyramid you want: \n");
	scanf("%d", &number);
	draw(number);

	return (0);
}

void draw(int height)
{
	int i, j;

	for (i = 0; i <= height; i++)
	{
		for (j = 0; j < i; j++)
			printf("[]");
		putchar('\n');
	}
}
