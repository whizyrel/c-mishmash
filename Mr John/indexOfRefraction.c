#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <tgmath.h>


// refractive index of glass relative to vacuum
int main(void) {
  // define refractive index of a vacuum as 1.00
  const double vacRef = 1.00;

  // constant PI
  const double PI = 3.14159;

  // tetha for incidence and refractive angle
  double t1 = 0, t2 = 0;

  // refractive index of glass
  double n = 0;

  printf("Calculates the refractive index of glass relative to vacuum\n");
  printf("The refractive index of glass is: ");
  printf("%.2f\n", vacRef);

  printf("==================================================================\n");
  printf("Calculating the refractive index of glass relative to a vacuum...\n");

  printf("==================================================================\n");
  printf("Enter the angle of incidence in degrees: ");
  scanf("%lf\n", &t1);

  printf("==================================================================\n");
  printf("Enter the angle of refraction in degrees: ");
  scanf("%lf\n", &t2);

  printf("==================================================================\n");
  printf("The angles entered are %f and %f in degrees, incidence and refractive respectively\n", t1, t2);

  // convert from degrees to radians
  // t1 = t1 * (PI/180);
  // t2 = t2 * (PI/180);

  // n = vacRef * (sin(t1) / sin(t2));

  // printf("The refractive index of glass relative to vacuum is %lf", n);
}
