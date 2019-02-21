#include <stdio.h>

void Rectangle(int fill, int size) {
  if (fill == 1) {
    for (int i = 0; i < size; ++i) {
      for (int j = 0; j < size; ++j) {
        printf("*");
      }

      printf("\n");
    }
  }
  else {
    for (int i = 0; i < size; ++i) {
      printf("*");

      for (int j = 1; j < (size - 1); ++j) {
        if ((i == 0) || (i == size - 1)) {
          printf("*");
        }
        else {
          printf(" ");
        }
      }

      printf("*");
      printf("\n");
    }
  }
  return;
}



int main() {

  Rectangle(0, 4);

  return 0;
}
