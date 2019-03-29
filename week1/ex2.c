#include <stdlib.h>
#include <stdio.h>

int main ()
{
  int i = 0;

  switch (i)
  {
    case 0:
      printf("zero\n");
      break;
    case 1:
      printf("one\n");
      break;
    case 2:
      printf("two\n");
      break;
    default:
      printf("Something other than 0, 1, or 2\n");
  }

  switch (i)
  {
    case 0:
      printf("zero\n");
    case 1:
      printf("one\n");
    case 2:
      printf("two\n");
    default:
      printf("Something other than 0, 1, or 2\n");
  }

  return(EXIT_SUCCESS);
}
