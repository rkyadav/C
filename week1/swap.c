#include <stdlib.h>
#include <stdio.h>

// void swap (int i, int j)
// {
//   int temp = i;
//   i = j;
//   j = temp;
// }
void swap (int* iPtr, int* jPtr)
{
  int temp = *iPtr;

  *iPtr = *jPtr;
  *jPtr = temp;
}

int main ()
{
  int a = 10;
  int b = 20;

  // swap(a,b);
  swap(&a,&b);
  printf("a - %d, b - %d\n",a,b);
  return(EXIT_SUCCESS);
}
