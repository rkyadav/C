#include <stdlib.h>
#include <stdio.h>

int main ()
{
  const int SIZE = 100;
  char space[SIZE];
  int integer;
  float floatingPt;

  printf("Please enter a number: ");
  fgets(space,SIZE,stdin);
  integer = atoi(space);
  floatingPt = atof(space);

  printf("integer = %d\tfloatingPt = %g\n",integer,floatingPt);
  return(EXIT_SUCCESS);
}
