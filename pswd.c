#include <stdio.h>

int main()
{
  char pswd[10];

  while(pswd[0] != 'y' || pswd[0] != 'Y')
    {
      printf("Should I stop?: ");
      scanf("%s", pswd);
      printf("\nOkay\n");
    }
  
  return 0;
}
