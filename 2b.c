#include <stdio.h>

int main()
{
char c;
unsigned char uc;
/*
  c = 45;
  printf("%d\t%d\t%u\n", (char)45, (short)c, (unsigned short)c);

  c = 150;
  printf("%d\t%d\t%u\n", (char)150, (short)c, (unsigned short)c);

  c = -150;
  printf("%d\t%d\t%u\n", (char)-150, (short)c, (unsigned short)c);

  c = 300;
  printf("%d\t%d\t%u\n", (char)300, (short)c, (unsigned short)c);

  c = -1;
  printf("%d\t%d\t%u\n", (char)-1, (short)c, (unsigned short)c);

  c = 65535;
  printf("%d\t%d\t%u\n", (char)65535, (short)c, (unsigned short)c);
*/
uc = 45;
printf("%d\t%d\t%u\n", (unsigned char)45, (short)uc, (unsigned short)uc);

uc = 150;
printf("%d\t%d\t%u\n", (unsigned char)150, (short)uc, (unsigned short)uc);

uc = -150;
printf("%d\t%d\t%u\n", (unsigned char)-150, (short)uc, (unsigned short)uc);

uc = 300;
printf("%d\t%d\t%u\n", (unsigned char)300, (short)uc, (unsigned short)uc);

uc = -1;
printf("%d\t%d\t%u\n", (unsigned char)-1, (short)uc, (unsigned short)uc);

uc = 65535;
printf("%d\t%d\t%u\n", (unsigned char)65535, (short)uc, (unsigned short)uc);

  return 0;
}
