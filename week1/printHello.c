#include <stdlib.h>
#include <stdio.h>

int hello (int limit)
{
  int i;

  for (i = 0; i < limit; i++)
    printf("Hello\n");

  return(i);
}

int main (int argc, const char* argv[])
{
  printf("%d\n",hello(8));
  return(EXIT_SUCCESS);
}
