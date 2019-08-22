#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>

int compare_ints(const void* a, const void* b)
{
    int arg1 = *(const int*)a;
    int arg2 = *(const int*)b;
 
    if (arg1 < arg2) return -1;
    if (arg1 > arg2) return 1;
    return 0;
 
    // return (arg1 > arg2) - (arg1 < arg2); // possible shortcut
    // return arg1 - arg2; // erroneous shortcut (fails if INT_MIN is present)
}

void getMaxNum(int *array) {
  int arrSize = sizeof(&array) / sizeof(int);

  // printf("%d\n", arrSize);
  qsort(array, 4, sizeof(int), compare_ints);

  for (int i = 0; i < 4 /*arrSize*/; i++) {
    printf("%d\n", array[i]);
  }

  printf("Maximum number is %d\n", array[4 - 1]);
  
}

int main(void) {
  int dim = 0;

  // ask user for input
  // printf("Enter the dimension: ");
  // set dimension
  dim = 4;

  // store in a variable
  // scanf("%d", &dim);

  // print dimension entered - optional
  printf("The dimension entered is: %d\n", dim);

  // declare array with the dimension entered
  // int *arr = malloc(dim * sizeof(int));
  int arr[4] = {8,2,3,4};

  int i = 0;

  while (i < dim) {
    printf("Enter the %dth element of the array of size %d: ", i, dim);
    scanf("%d", &arr[i]);
    i++;
  }

  // confirm size of array
  // printf("The size of array is %ld\n", sizeof(arr) / sizeof(int));

  // call function
  getMaxNum(arr);
}
