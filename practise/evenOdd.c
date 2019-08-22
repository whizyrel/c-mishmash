#include <stdio.h>
#include <stdlib.h>

int checkEvenOdd(int no)
{
  if((no % 2) > 0)
    printf("%d is an Odd number\n", no);
  else
    printf("%d is an Even number\n", no);

  return 0;
}

int main() {

  int no;

  printf("Enter the number to be checked. Note: it must be an integer => ");
  scanf("%d", &no);

  printf("Printing result...\n");
  
  checkEvenOdd(no);

  printf("Completed!\n");

  return 0;
}
