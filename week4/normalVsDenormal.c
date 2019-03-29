#include	<stdlib.h>
#include	<stdio.h>

int		main		()
{
  int		i	= 0x3F800001;
  float*	fPtr	= (float*)&i;
  float		f	= *fPtr;
  float		fDiv2	= f / 2.0;

  printf("%10g * 2.0 = %10g vs %10g\n",fDiv2 , 2.0*fDiv2,f);

  i			= 0x00004001;
  f			= *fPtr;
  fDiv2			= f / 2.0;
  printf("%10g * 2.0 = %10g vs %10g\n",fDiv2 , 2.0*fDiv2,f);
  return(EXIT_SUCCESS);
}
