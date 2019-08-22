#include <stdio.h>
#include <stdlib.h>
// #include <conio.h>


int multTable(int no)
{
  int i = 1, acc = 1;

  printf(" \t%d\n", no);
  for (i; i <= no; i++)
  {
    acc = i * no;
    printf("%d\t%d\n", i, acc);
  }
  return 0;
}

int main() {

  int N;

  printf("Enter the number whose table you want to print => ");
  scanf("%d", &N);

  printf("Printing multiplication table!\n");

  multTable(N);

  printf("Completed!\n");
}
