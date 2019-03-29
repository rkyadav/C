#include <stdlib.h>
#include <stdio.h>

int main ()
{
  float bigNum = 1e+20;
  float smallNum = 3.14;
  float result1 = (bigNum - bigNum) + smallNum;
  float result2 = bigNum - (bigNum - smallNum);

  printf("result1 equals %g\n",result1);
  printf("result2 equals %g\n",result2);
}
