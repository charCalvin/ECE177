#include <stdio.h>

int main()
{
  int sec, min, hour;
  int mask = 0b1000;
  int digit, tensPlace, onesPlace;

  //The initial get and set
  printf("Enter hours, minutes, seconds: ");
  scanf("%d %d %d", &hour, &min, &sec);

  // this while loop quits the program if time == 0 0 0
  while ((sec != 0) || (min != 0) || (hour != 0))
  {
    // Check the range of hour
    if ((hour >= 1) && (hour <= 12))
    {

      // Find ones and tens place
      tensPlace = hour / 10;
      onesPlace = hour % 10;

      //Print Hours
      // To print 8bit bianry as 4 digits on top of 4 digits
      while (mask >= 0b0001)
      {
        digit = (tensPlace & mask);

        if (digit == mask) printf("1");
        else printf("0");

        mask = (mask >> 1);
      }

      mask = 0b1000;
      printf("\n");

      while (mask >= 0b0001)
      {
        digit = (onesPlace & mask);

        if (digit == mask) printf("1");
        else printf("0");

        mask = (mask >> 1);
      }
    }
    else printf("Error: %d", hour);


    //reset mask and print new line
    mask = 0b1000;
    printf("\n");


    // Check the range of min
    if ((min >= 0) && (min <= 59))
    {

      // Find ones and tens place
      tensPlace = min / 10;
      onesPlace = min % 10;

      //Print Minutes
      // To print 8bit bianry as 4 digits on top of 4 digits
      while (mask >= 0b0001)
      {
        digit = (tensPlace & mask);

        if (digit == mask) printf("1");
        else printf("0");

        mask = (mask >> 1);
      }

      mask = 0b1000;
      printf("\n");

      while (mask >= 0b0001)
      {
        digit = (onesPlace & mask);

        if (digit == mask) printf("1");
        else printf("0");

        mask = (mask >> 1);
      }
    }
    else printf("Error: %d", min);


    //reset mask and print new line
    mask = 0b1000;
    printf("\n");


    // Check the range of sec
    if ((sec >= 0) && (sec <= 59))
    {

      // Find ones and tens place
      tensPlace = sec / 10;
      onesPlace = sec % 10;

      // Print Seconds
      // To print 8bit bianry as 4 digits on top of 4 digits
      while (mask >= 0b0001)
      {
        digit = (tensPlace & mask);

        if (digit == mask) printf("1");
        else printf("0");

        mask = (mask >> 1);
      }

      mask = 0b1000;
      printf("\n");

      while (mask >= 0b0001)
      {
        digit = (onesPlace & mask);

        if (digit == mask) printf("1");
        else printf("0");

        mask = (mask >> 1);
      }
    }
    else printf("Error: %d", sec);


    //reset mask and print two new lines
    mask = 0b1000;
    printf("\n\n");

    //Get and set for the loop
    printf("Enter hours, minutes, seconds: ");
    scanf("%d %d %d", &hour, &min, &sec);
  }

  return 0;
}
