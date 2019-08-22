#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/* 
  * grab file location from command line argument
  * read file in
  * split file into an array by line
  * increment by length of array, begin iteration from 1
  * split each line by comma
  * add element 2 + 3 and divide by 2 to give cgpa and put into an array
  * append each element of the cgpa array into the file line by line starting from 2 line
 */

float gp1, gp2, cgpa;
char s_n, names;

float *CGPACalculator(char *line)
{
  int i = 0;
  for (char *token = strtok(line, ","); token; token = strtok(NULL, ","))
  {
    i++;
    // printf("%c\n", *token);
    // printf("%s\n", token);
    if(i == 3) {
      // printf("%s\n", token);
      gp1 = atof(token);
    }
    if (i == 4)
    {
      // printf("%s\n", token);
      gp2 = atof(token);
    }
  }
  // printf("gp1 is %f\n", gp1);
  // printf("gp2 is %f\n", gp2);
  cgpa = (gp1 + gp2) / 2;
  // printf("cgpa is %f\n", cgpa);

  return &cgpa;
}

char *nameProperty (char *line) 
{
  printf("line %s\n", line);
  int i = 0;
  for (char *token = strtok(line, ","); token; token = strtok(NULL, ","))
  {
    i++;
    printf("token - begining %s\n", token);
    // printf("%s\n", token);
    if (i == 1)
    {
      printf("first token %s\n", token);
      // s_n = *token;
    }
    if (i == 2)
    {
      printf("second token %s\n", token);
      // names = *token;
    }
    printf("token - end %s\n", token);
  }
  char *comma = ",";
  char *final = s_n + comma + names;
  // printf("gp1 is %s\n", &s_n);
  // printf("gp2 is %s\n", &names);
  printf("final is %s\n", final);

  return final;
}

char *fileCollector(char *string, int no) {
  char ch;
  char line[86];
  int n = 0;
  char lineArray[20][100];
  printf("Number of students is => %d\n", no);

  FILE *fp = fopen(string, "r");

  if (fp == NULL)
  {
    perror("Error while opening the file.\n");
    exit(EXIT_FAILURE);
  }

  printf("The contents of %s file are:\n", string);

  /* while ((ch = fgetc(fp)) != EOF)
    printf("%c", ch);
  
  printf("\n"); */
  while((fgets(line, sizeof line, fp))) {
    // put each of line into an array
    if (n <= no)
    {
      // printf("This is line %d of %s", n, line);
      // only valid way to put elements into an array
      strcpy(lineArray[n], line);
      // printf("This is array element %s", lineArray[n]);
    }
    ++n;
  }

  // check veracity of array
  // printf("\nnumber is: %s", lineArray[19]);
  // call line splitter
  for (int i = 0; i <= no; i++) 
  {
    char cgpastr, otherstr;
    // strcpy(&cgpastr, lineArray[i]);
    // strcpy(&otherstr, lineArray[i]);
    printf("this line %s\n", lineArray[i]);
    float *cgpa = CGPACalculator(lineArray[i]);
    printf("this line %s\n", lineArray[i]);
    char *otherProperties = nameProperty(&otherstr);
    // printf("First set of properties are %s\n", otherProperties);
    // printf("cgpa is %0.2f\n", *cgpa);
    // append cgpa to csv file
    FILE *fp = fopen(string, "a");
    // append cgpa to the end
    if(fp == NULL) {
      perror("Error while opening the file.\n");
      exit(EXIT_FAILURE);
    }
    // write header
    // fprintf(fp, "%s", "S/N,NAMES,1ST SEMESTER GPA,2ND SEMESTER GPA, CGPA");
    fprintf(fp, "%0.2f\n", *cgpa);
    fclose(fp);
  }
  // printf("\n\n");
  printf("\n");

  fclose(fp);
  // would be ignored
  char *returnedArray = malloc(strlen(*lineArray));
  memcpy(returnedArray, *lineArray, strlen(*lineArray));

  // return an array
  return returnedArray;
}

char *fileLocationCollector(char *astring)
{
  char *fileLocation = astring;
  char *mem = malloc(strlen(astring));
  strncpy(mem, fileLocation, strlen(astring));
  return fileLocation;
}

int main(const int argc, char *argv[]) {
  int noOfStudents;
  // read file location from command line
  printf("%d number(s) of arguments. The path to the file is %s\n", argc, argv[1]);
  char *location = fileLocationCollector(argv[1]);
  printf("%s\n", &*location);
  printf("Enter number of students => ");
  scanf("%d", &noOfStudents);
  //call file reader
  // fileCollector(location, noOfStudents);
  char *array = fileCollector(location, noOfStudents);
  // printf("\nhere => %s\n", array);
  return 0;
}
