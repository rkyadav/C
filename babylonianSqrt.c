#include	<stdlib.h>
#include	<stdio.h>

const int	TEXT_LEN	= 64;
float number;

void		obtainFloat	(float*	fPtr
				)
{
  char	text[TEXT_LEN];
	int max = 65535;
	int min = 0;

  do
  {
    printf("Please enter a number from 0 to 65535: \n");
    fgets(text,TEXT_LEN,stdin);
		number = atof(text);
  }
  while ((number < 0) || (number > 65535));

  *fPtr = number;
}


float		squareRoot	(float	number,
				 int	maxIters,
				 int*	numItersPtr
				)
{
  float	estimate	= 1.0;

do {
  estimate = (0.5 * (estimate + number/estimate));
  (*numItersPtr)++;
	if ((estimate*estimate) == number){
		break;
	}
}while(*numItersPtr < maxIters);

  return(estimate);
}


int		main		()
{
  float	f;
  float	ans;
  int	numIters	= 0;

  obtainFloat(&f);
  ans	= squareRoot(f,100,&numIters);
  printf("squareRoot(%g) approx. equals %g (found in %d iterations).\n",
         f,ans,numIters
	);
  return(EXIT_SUCCESS);
}
