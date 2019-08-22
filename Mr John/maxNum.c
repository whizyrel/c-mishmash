#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>

// void getMaxNum(int array) {
//   int arrSize = sizeof(array) / sizeof(int);
//   int i;

//   // printf("%d", arrSize);
//   qsort(array, arrSize, sizeof(int));
//   // for (i = 0; i < arrSize; i++) {
//   //   printf("Enter the %dth element: ", i + 1);
//   //   // while((sizeof(array)/sizeof(int)) < arrSize) {
//   //     scanf("%d\n", array[i]);
//   //     // printf("%d\n", array[i]);
//   //   // }
//   // }
// }

int main(void) {
  int dim = 0;

  // ask user for input
  printf("Enter the dimension: ");

  // store in a variable
  scanf("%d", &dim);

  // print dimension entered - optional
  printf("The dimension entered is: %d\n", dim);

  // declare array with the dimension entered
  // int *arr = malloc(dim * sizeof(int));
  int arr[dim];

  // confirm size of array
  printf("The size of array is %ld\n", sizeof(arr) / sizeof(int));

  // call function
  // getMaxNum(dim);
}
