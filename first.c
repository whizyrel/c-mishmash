#include <stdio.h>

 int main(int argc, char *argv[]) {
   char *ghost;
   scanf("%s", ghost);
   printf("Hi there! %s", ghost);
   return 0;
 }

/* 
  printf("Loop begins here\n");
   printf("---------------------\n");

   for(int i = 0; i < argc; i++) {
     if (i != 0)
     printf("Total number of argument(s) is %d, at %d => this '%s' was passed\n", argc, i, argv[i]);
   }
   printf("Thanks for coming!\n");
 */
