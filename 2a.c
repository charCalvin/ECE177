#include <stdio.h>

int main()
{
printf("%d\t%u\n", (short)45, (unsigned short)45);
printf("%d\t%u\n", (short)150, (unsigned short)150);
printf("%d\t%u\n", (short)-150, (unsigned short)-150);
printf("%d\t%u\n", (short)300, (unsigned short)300);
printf("%d\t%u\n", (short)-1, (unsigned short)-1);
printf("%d\t%u\n", (short)65535, (unsigned short)65535);

  return 0;
}
