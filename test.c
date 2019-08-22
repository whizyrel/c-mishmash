#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{

  float Cgp1;
  float Cgp2;
  float Cgpa;
  char buffer[1024];
  FILE *pInput = fopen("Students_data_Sheet1.csv", "r");
  if (pInput == NULL)
  {
    printf("\n Unable to open file");
  }
  else
  {
    while (fgets(line, 1024, stream))
    {
      char *tmp = strdup(line);
      char *cgp1 = getfield(tmp, 5);
      char *cgp2 = getfield(tmp, 8);
      cgpa = cgp1 + cgp2;
    }
    for (i = 0; i < 20; i++)
    {
      fprintf(fptr, "%f", cgpa)
    }
  }
}
