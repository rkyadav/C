#include	<stdlib.h>
#include	<stdio.h>

int		main		()
{
  int		i 	= 0x40600000;
  float*	fPtr	= (float*)&i;

  printf("%X has the same bit pattern as %f.\n",i,*fPtr);

  i			= 0xBF800000;
  printf("%X has the same bit pattern as %f.\n",i,*fPtr);

  i			= 0x3FE00000;
  printf("%X has the same bit pattern as %f.\n",i,*fPtr);

  i			= 0x00000000;
  printf("%X has the same bit pattern as %f.\n",i,*fPtr);

  return(EXIT_SUCCESS);
}
