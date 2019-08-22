#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int divideNumber(int number){
  int a = 0, n = 0, no;

  n = number;
  printf("n => %d\n", n);

  while (n >= 1)
  {
    no = n % 10;
    printf("1 no => %d \t", no);
    a = a * 10 + no;
    printf("2 a => %d\t", a);
    n = n / 10;
    printf("3 no => %d\n", no);
    // break;
  }
  return a;
}

int main() 
{
  int no, reversed;

  printf("Enter a number to be reversed => ");
  scanf("%d", &no);

  reversed = divideNumber(no);
  printf("The reversed no is %d\n", reversed);

  return 0;
}
