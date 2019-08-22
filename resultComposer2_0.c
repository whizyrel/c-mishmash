#include "stdio.h"
#include "stdlib.h"
#include "string.h"

int fileCollector(const char *fileName)
{
  printf("%s is the name of the file passed\n", fileName);

  FILE *file = fopen(fileName, "r");
  if (file == NULL) 
  {
    perror("Error while opening the file.\n");
    exit(EXIT_FAILURE);
  }

  
  return 0;
}

int main(const int argc, const char *argv[]) {
  // collect the file path from comman line
  const char *fileName = argv[1];
  printf("File name has been successfully received => %s\n", fileName);
  fileCollector(fileName);
}

// collect file name
// open file
// compute gpa for first semester
// compute gpa for second semester
// compute cgpa
// write to file cgpa
