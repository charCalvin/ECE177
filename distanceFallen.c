#include <stdio.h>

int main()
{
// Variables
float       initial_s = 0.0;
float         delta_s = 0.0;
float initialVelocity = 0.0;
float               t = 0.0;
float            acc = 32.2;

// Ask for initial velocity
  printf("Please enter an initial velocity: ");
  scanf("%f", &initialVelocity);
  printf("Please enter an initial hight: ");
  scanf("%f", &initial_s);
  printf("\n\n");

//Evaluate the equation up to t = 100
  for (t=0; t <= 100; t+=5)
  {
    delta_s = initial_s + (initialVelocity * t) + (0.5 * acc * (t * t));
    printf("The hight of the object is %fft\nat time t = %f\n\n", delta_s, t);

}
  return 0;
}
