#include <stdio.h>

int main() {

  int size       = 5;
  int rep        = 3;

  //Repatitions
  for (int r=0; r<rep; ++r) {
      //Column
      for (int i=1; i<=size; ++i) {
        //pirnt Row
        for (int j=0; j<(i-1); ++j) {
          printf(" ");
        }

        printf("*");
        printf("\n");
      }

      //Column
      for (int i=size; i>0; i--) {
        //pirnt Row
        for (int j=0; j<(i-1); ++j) {
          printf(" ");
        }

        printf("*");
        printf("\n");
      }
  }

  return 0;
}
