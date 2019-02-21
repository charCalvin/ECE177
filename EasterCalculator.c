#include <stdio.h>

int main()
{
int A     = 0;
int B     = 0;
int C     = 0;
int D     = 0;
int E     = 0;
int F     = 0;
int G     = 0;
int H     = 0;
int I     = 0;
int K     = 0;
int L     = 0;
int M     = 0;
int N     = 0;
int P     = 0;
int year  = 0;
int month = 0;
int day   = 0;

//Get year
   printf("Enter the year: ");
   scanf("%d", &year);

//Algorithm
   //1
   A = year % 19;
   //2
   B = year / 100;
   C = year % 100;
   //3
   D = B / 4;
   E = B % 4;
   //4
   F = (B + 8) / 25;
   //5
   G = (B - F + 1) / 3;
   //6
   H = ((19 * A) + B - D - G + 15) % 30;
   //7
   I = C / 4;
   K = C % 4;
   //8
   L = (32 + (2 * E) + (2 * I) - H - K) % 7;
   //9
   M = (A + (11 * H) + (22 * L)) / 451;
   //10
   N = (H + L - (7 * M) + 114) / 31;
   P = (H + L - (7 * M) + 114) % 31;
   // IDK
   month = N;
   day = P + 1;

//Print The Calculations
   printf("In %d Easter will be on : %d/%d\n", year, month, day);


return 0;
}
