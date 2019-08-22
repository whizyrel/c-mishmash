#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
  // int maxChar;
  // read array dimension
  printf("Maximum number of characters is 5\n");
  // scanf("%d\n", &maxChar);

  // declare character array
  char *arrChar[5];

  // read in characters into an array - arrChar
  for (int i = 0; i < 5; i++) {
    printf("Enter characters: ");
    scanf("%s\n", &arrChar[i]);
  }

  // write in reverse order
  for (int i = (5 - 1); i >= 0; i--) {
    printf("%s", &arrChar[i]);
  }
  printf("\n");
}
