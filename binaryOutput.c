#include <stdio.h>

int main() {

int min = 12;
int mask = 0b10000000;
int digit;

printf("%d\n\n", min);

// To print 8bit bianry as 4 digits on top of 4 digits
while (mask >= 0b00010000) {
  digit = (min & mask);

  if (digit == mask) printf("*");
  else printf("_");

  mask = (mask >> 1);
}
printf("\n");
while (mask >= 0b00000001) {
  digit = (min & mask);

  if (digit == mask) printf("*");
  else printf("_");

  mask = (mask >> 1);
}

//reset mask
  mask = 0b10000000;

printf("\n\n");

  return 0;
}
