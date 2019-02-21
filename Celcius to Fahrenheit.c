#include<stdio.h>

int main()
{
  float fahrenheit = 0;
  float celcius = 0;

//Get value for fahrenheit
  printf("Enter Fahrenheit Value: ");
  scanf("%f", &fahrenheit);

//Convert Fahrenheit to Celcius
  celcius = (5.0 * (fahrenheit - 32.0)) / 9.0;

//Print results
  printf("Celcius: %f\n", celcius);
  printf("Fahrenheit: %f\n", fahrenheit);
  
  return 0;
}
