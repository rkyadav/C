#include	<stdlib.h>
#include	<stdio.h>

const int	SIZE	= 64;

int		main	()
{
  char		text[SIZE];
  unsigned int	i;
  unsigned int	j;
  char*		cPtr;

  while  (1)
  {
    printf("Please enter an integer in hexadecimal without the 0x: ");
    fgets(text,SIZE,stdin);
    i = strtol(text,&cPtr,16);

    printf("Please enter an integer in hexadecimal without the 0x: ");
    fgets(text,SIZE,stdin);
    j = strtol(text,NULL,16);

    printf("0x%04X & 0x%04X = 0x%04X\n",i,j,i&j);
    printf("0x%04X | 0x%04X = 0x%04X\n",i,j,i|j);
  }

  return(EXIT_SUCCESS);
}
