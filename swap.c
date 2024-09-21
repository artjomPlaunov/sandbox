#include <stdio.h>

int main() {
  unsigned int x = 3;
  unsigned long y = 18446744073709551615;

  printf("sizeof uint: %d\n", sizeof(unsigned int));
  printf("sizeof ulong: %d\n", sizeof(unsigned long));

  char * ptr = &x;
  for (int i = 0; i < 8; i++) {
    printf("byte %d: %x\n", i, *(ptr+i));
  }
  printf("\n");

  ptr = &y;
  for (int i = 0; i < 8; i++) {
    printf("byte %d: %x\n", i, *(ptr+i));
  }
  printf("\n");
  
  
  unsigned int *pint = &x;
  unsigned long *pdouble = &y;

  unsigned long temp = *pdouble;
  *pdouble = *pint;
  *pint = temp;

  ptr = &x;
  for (int i = 0; i < 8; i++) {
    printf("byte %d: %x\n", i, *(ptr+i));
  }
    printf("\n");

  ptr = &y;
  for (int i = 0; i < 8; i++) {
    printf("byte %d: %x\n", i, *(ptr+i));
  }
  printf("\n");
  
  printf("%d\n", x);
  printf("%ld\n", y);



  

}
