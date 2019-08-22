#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

// void main() {
//   struct timespec ts;
//   printf("hello!");
//   printf(timespec_get(&ts, TIME_UTC));
// }
int main(void)
{
    struct timespec ts;
    timespec_get(&ts, TIME_UTC);
    char buff[100];
    strftime(buff, sizeof buff, "%D %T", gmtime(&ts.tv_sec));
    printf("Current time: %s.%09ld UTC\n", buff, ts.tv_nsec);
}
