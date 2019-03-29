#include	<stdlib.h>
#include	<stdio.h>

int		main	()
{
  int	i;

  for  (i = 0;  i < 32;  i++)
  {
    unsigned int	u	= 0x80000000;
    int			j	= 0x80000000;
    int*		uPtr	= (int*)&u;

    printf("unsigned: %08X >> %d == %08X\n",u,i,u>>i);
    printf("  signed: %08X >> %d == %08X\n",j,i,j>>i);
  }

  for  (i = 0;  i < 32;  i++)
  {
    unsigned int	u	= 0x80000000;
    int			j	= 0x80000000;

    printf("unsigned: %08X >> %d == %u\n",u,i,u>>i);
    printf("  signed: %08X >> %d == %d\n",j,i,j>>i);
  }

  return(EXIT_SUCCESS);
}
