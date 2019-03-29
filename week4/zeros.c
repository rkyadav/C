#include	<stdlib.h>
#include	<stdio.h>

int		main		()
{
  float		pos0		= +0.0;
  float		neg0		= -0.0;

  printf("pos0 = %g\n",pos0);
  printf("neg0 = %g\n",neg0);

  printf("Does %g == %g?  ",pos0,neg0);

  if  (pos0 == neg0)
    printf("Yes!\n");
  else
    printf("No!\n");

  return(EXIT_SUCCESS);
}
