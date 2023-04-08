#include <stdio.h>

void draw(int height);

int main(void)
{
	int number;

	printf("Enter the height of the pyramid to be recursively drawn: ");
	scanf("%d", &number);
	draw(number);

	return (0);
}

void draw(int height)
{
	int i;

	if (height <= 0)
		return;

	draw(height - 1);
	for (i = 0; i < height; i++)
	{
		printf("[]");
	}
	putchar('\n');
}
