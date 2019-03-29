#include <stdlib.h>
#include <stdio.h>

int main ()
{
  int i = 258;
  int* iPtr = &i;
  char* cPtr = (char*)iPtr;

  printf("cPtr[0] = 0x%02X\n",*cPtr);
  printf("cPtr[0] = 0x%02X\n",(*cPtr+1));
  printf("cPtr[0] = 0x%02X\n",(*cPtr+2));
  printf("cPtr[0] = 0x%02X\n",(*cPtr+3));
  return(EXIT_SUCCESS);
}
