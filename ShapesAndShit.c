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

void Triangle(int fill, int size) {

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

  return;
}

void ZigZag(int rep, int size) {
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

  return;
}



int main() {
  int shape = 0;
  int size = 0;
  int fill = 0;
  int rep = 0;

  printf("Enter shape (1) Square, (2) Triangle, (3) Zig-zag (4) Quit: ");
  scanf("%d", &shape);

  while (shape != 4) {
    switch (shape) {
      case 1:
        printf("Enter size: ");
        scanf("%d", &size);

        printf("Enter (0) No fill, (1) Fill: ");
        scanf("%d", &fill);

        Rectangle( fill, size);
        break;

      case 2:
        printf("Enter size: ");
        scanf("%d", &size);

        printf("Enter (0) No fill, (1) Fill: ");
        scanf("%d", &fill);

        Triangle( fill, size);
        break;

      case 3:
        printf("Enter size: ");
        scanf("%d", &size);

        printf("Enter number of zigs: ");
        scanf("%d", &rep);

        ZigZag(rep, size);
        break;
    }

    printf("Enter shape (1) Square, (2) Triangle, (3) Zig-zag (4) Quit: ");
    scanf("%d", &shape);
  }

  return 0;
}
