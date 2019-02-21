#include<stdio.h>
#include<math.h>

int main()
{

// Variables
  double          a = 0;
  double          b = 0;
  double          c = 0;
  double  plusValue = 0;
  double minusValue = 0;
  double       root = 0;

//Get values for a, b, and c
  printf("Enter values for\na: ");
  scanf("%lf", &a);
  printf("b: ");
  scanf("%lf", &b);
  printf("c: ");
  scanf("%lf", &c);

// Evaluate what is in the square root
  root = (b * b) - (4 * a * c);

// If root is a negative value: Fail
// Else continue with the equation
if ( root < 0)
{
  printf("I'm a computer.\n");
  printf("I don't have an imagination for imaginary numbers.\n");
  scanf("Press enter to continue...");
}
else
{
// Evaluate the equation for +
  plusValue = (-b + sqrt(root) / (2 * a));
  minusValue = (-b - sqrt(root) / (2 * a));

// Print results
  printf("+b: %lf\n", plusValue);
  printf("-b: %lf\n", minusValue);

}

return 0;
}
