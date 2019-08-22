#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int number(char *line) {
  int i = 0;
  for (char *token = strtok(line, ","); token; token = strtok(NULL, ","))
  {
    printf("%s", token);
  }
  return i;
}

void main(void) {
  char *str = "S/N,NAMES,1ST SEMESTER GPA,2ND SEMESTER GPA";
  char hi = number(str);
}

/* 
\n1,AFE BABALOLA,4.17,4.25\n2,OJO BABATUNDE,3.67,4.17\n3,IFEJULO KANYINSILE,4.04,4.08\n4,GRACE PERKINS,4.21,4.71\n5,KOLA OLATUNDE,3.92,4.42\n6,OLATUNDUN ISRAEL,4.58,4.42\n7,MIMI JOHN,4.08,4.17\n8,HOPE HAWKINS,4.25,11.88\n9,MOMOH SAIDIA,4.29,4.29\n10,JOHN PETERS,4.25,4.25\n11,HOSEA PARKER,4.58,3.71\n12,LIZZY HAILS,3.75,4.29\n13,HEROD LONG,3.75,3.79\n14,CHIBUZOR UCHECHUKWU,4.00,4.00\n15,AMAZI OLORUNJUWANLO,3.54,3.88\n16,OPEOLUWA OLOLADE,4.00,3.79\n17,KEVIN IGHALO,4.71,4.71\n18,ABDULWASIU GAFAR,4.42,4.00\n19,KAZEEM OLOWOLAYEMO,3.88,4.33\n20,KOLA AZEEZ,3.63,4.08
 */
