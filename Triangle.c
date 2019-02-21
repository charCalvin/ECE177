#include <stdio.h>

int main() {
  int size = 1;
  int fill = 0;

  if (fill == 1) {
    for (int i=1; i<=size; ++i) {
      printf("*");

      for (int j=1; j<i; j++) {
        printf("*");
      }

      printf("\n");
    }
  }
  else {
    for (int i=1; i<=size; ++i) {
      printf("*");

      //does line need spaces?
      if ((i>1) && (i<size)) {
        for (int j=0; j<(i-2); ++j) {
          printf(" ");
        }
        printf("*");
      }
      else if (i==size) {
        for (int j=0; j<(size-1); ++j){
          printf("*");
        }
      }

      printf("\n");
      }

    }


  return 0;
}
