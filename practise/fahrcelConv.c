#include <stdlib.h>
#include <stdio.h>

float celConverter(float celValue)
{
  float convrtd;

  convrtd = (9/5.0 * celValue) + 32;

  return convrtd;
}


int main()
{
  float C, result;

  printf("Enter th celcius value to convert => ");
  scanf("%f", &C);

  result = celConverter(C);

  printf("The fahrenheit equivalence is => %.2f F in 2 d.p places\n", result);
  return 0;
}
