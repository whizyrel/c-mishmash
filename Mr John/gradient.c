#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// calculate gradient
int main(void) {

  // variable to store addresses of variables - pointers/pointer variable
  int m = 0, y2 = 0, y1 = 0, x2 = 0, x1 = 0;

  // receive inputs from user
  printf("Enter value for y2: ");
  scanf("%d\n", &y2);

  printf("Enter value for y1: ");
  scanf("%d\n", &y1);

  printf("Enter value for x2: ");
  scanf("%d\n", &x2);

  printf("Enter value for x1: ");
  scanf("%d\n", &x1);

  printf("The enterd values are (%d, %d), (%d, %d)\n", x1, y1, x2, y2);

  // calculate m
  m = (y2 - y1) / (x2 - x1);

  printf("The gradient of a line between points (%d, %d) and (%d, %d) is %d\n", x1, y1, x2, y2, m);
  printf("======================================\n");
  printf("Answer is in 2 d.p\n");

  // input for both y2 and y1
}
