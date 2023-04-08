#include <stdio.h>

void swap_int(int *a, int *b) 
 { 
         int t; 
  
         t = *a; 
         *a = *b; 
         *b = t; 
 }

int main(void)
{
    int a[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0, 4, 3, 2, 1 };
    int i;
    int size = 4;
    int *j;
    int tmp;


    for(*j = a; j < a + sizeof(a)/sizeof(*a); *j++)
    {
	if (*j > *j+1)
	    swap(*j, *j+1);
	i = 0;
	do
	{
	    printf( "%d ", a[i] );
	    size += 4;
	    i++;
	} while (size <= sizeof(a));
    }

printf( "\n" );
//printf("
}
