#include <stdio.h>

int main() {
  int width = 10;
  int height = 5;
  int fill = 0;

if (fill == 1) {
  for (int i = 0; i < height; ++i) {
    for (int j = 0; j < width; ++j) {
      printf("*");
    }

    printf("\n");
  }
}
else {
  for (int i = 0; i < height; ++i) {
    printf("*");

    for (int j = 1; j < (width - 1); ++j) {
      if ((i == 0) || (i == height - 1)) {
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

  return 0;
}
