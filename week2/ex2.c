#include	<stdlib.h>
#include	<stdio.h>

const int	SIZE	= 64;

unsigned int	f	(unsigned int	u
			)
{
  return( (u & 0xF0F0) | 0x0F00 );
}


int		main	()
{
  char	text[SIZE];
  unsigned int	u;

  while  (1)
  {
    printf("Please enter a hexadecimal integer without 0x: ");
    fgets(text,SIZE,stdin);
    u	= strtol(text,NULL,16);
    printf("f(%X) = %X\n",u,f(u));
  }

  return(EXIT_SUCCESS);
}
