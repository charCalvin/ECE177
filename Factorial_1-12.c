#include <stdio.h>

int main() {

  int x = 1;
  int total = 1;

  while (x <= 12) {
    total = total * x;

    printf("%-2d %9d\n", x, total);

    x++;
  }

  return 0;
}
