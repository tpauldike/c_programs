#include <stdio.h>

void draw_tree(int height);

int main(void)
{
	int number;

	printf("Enter the height of the tree to be drawn: ");
	scanf("%d", &number);

	if (number <= 1)
        {
		printf("\nonly a positive, odd and whole number (greater than 1) is allowed!\n");
                return (0);
        }
        else if (number % 2 == 0)
        {
                printf("\nEven numbers do not work here!\n");
                return (0);
        }

	draw_tree(number);

	return (0);
}

void draw_tree(int height)
{
	int space, h, s=0;

	if (height <= 1)
		return;

	space = height/2;

	while (s < space)
	{
		putchar(' ');
		space--;
		for (h = height; h >= 0; h--)
			putchar('#');
	}
	putchar('\n');
}
