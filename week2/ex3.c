#include	<stdlib.h>
#include	<stdio.h>

const int	SIZE	= 64;

unsigned int	combine	(unsigned int	u0,
			 unsigned int	u1
			)
{
  return( ((u0 & 0xFF00) >> 8) | ((u1 & 0x00FF) << 8) );
}


int		main	()
{
  char	text[SIZE];
  unsigned int	u0;
  unsigned int	u1;

  while  (1)
  {
    printf("Please enter a hexadecimal integer without 0x: ");
    fgets(text,SIZE,stdin);
    u0	= strtol(text,NULL,16);

    printf("Please enter a hexadecimal integer without 0x: ");
    fgets(text,SIZE,stdin);
    u1	= strtol(text,NULL,16);

    printf("combine(0x%X,0x%X) = 0x%X\n",u0,u1,combine(u0,u1));
  }

  return(EXIT_SUCCESS);
}
