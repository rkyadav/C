#include <stdlib.h>
#include <stdio.h>

int main ()
{
  int i;
  int j;
  const int SIZE = 64;
  char space [SIZE];
  int n;

  do
  {
    printf("Please enter an integer in 1-10: \n");
    fgets(space,SIZE,stdin);
    n = atoi(space);
  }
  while ((n < 2) || (n > 10));

  for (i = 1; i <= n; i++)
    for (j = 1; j <= n; j++)
      printf("%d * %d = %d\n",i,j,i*j);

  return(EXIT_SUCCESS);
}
