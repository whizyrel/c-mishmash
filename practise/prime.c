#include <stdio.h>

int checkPrime(int no)
{
  _Bool result = 0;
  int i;

  for (i = 2; i < no; i++) {
    if((no % i) == 0)
      break;

    
  }
  if ((no % 2) > 0)
  {
    result = 1; // true is a prime no
    } else {
    result = 0; // false not a prime no
  }

  return result;
}

int main() {

  int number;
  _Bool result;

  printf("Enter the number to check => ");
  scanf("%d", &number);

  result = checkPrime(number);

  if(result == 1) 
  {
    printf("%d is a prime number\n", number);
  }
  else
  {
    printf("%d is not a prime number\n", number);
  }

  return 0;
}
