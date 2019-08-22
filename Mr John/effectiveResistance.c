#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
  double effectiveResistance, rt;
  int r1, r2, r3, r4;

  printf("Calculates effective resistance\n");

  printf("==================================================================\n");
  printf("Enter the value for the resistance (r1): ");
  scanf("%d", &r1);

  printf("==================================================================\n");
  printf("Enter the value for the resistance (r2): ");
  scanf("%d", &r2);

  printf("==================================================================\n");
  printf("Enter the value for the resistance (r3): ");
  scanf("%d", &r3);

  printf("==================================================================\n");
  printf("Enter the value for the resistance (r4): ");
  scanf("%d", &r4);

  printf("==================================================================\n");

  printf("The values for resistance r1: %d, r2: %d, r3: %d, r4: %d\n", r1, r2, r3, r4);

  printf("==================================================================\n");

  // total resistance of resistances connected in parallel 1/rt = 1/r1 + 1/r2 + ... + 1/rn
  rt = (1.0/r1) + (1.0/r2) + (1.0/r3) + (1.0/r4);
  printf("%f\n", rt);
  
  // effective resistance is rt = 1/(1/rt) => rt which is total resistance of the circuit
  effectiveResistance = 1/rt;

  printf("The total/effective resistance of resistance r1: %d, r2: %d, r3: %d, r4: %d is %.2f\n", r1, r2, r3, r4, effectiveResistance);
  printf("Answer is giving in 2 d.p");
}
