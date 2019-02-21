#include<stdio.h>

int main()
{
  double x = 0;
  double y = 0;

// Get x value
  printf("Insert a value for x: " );
  scanf("%lf", &x);

// calculate function
  y = (x * x * x) + (5 * (x * x)) + (10 * x) + 10;

// Print results
  printf("y = %lf\n", y);

  return 0;
}
