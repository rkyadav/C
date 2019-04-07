#include <stdio.h>

int main()
{
  int integerVar = 100;
  float floatingVar = 331.79;
  double doubleVar = 8.44e+11;
  char charVar ='W';
  _Bool boolVar = 0;

  printf("integerVar = %i\n", integerVar);
  printf("floatingVar = %f\n", floatingVar);
  printf("doubleVar %e\n", doubleVar);
  printf("doubleVar = %g\n",doubleVar );
  printf("charVar = %c\n", charVar);
  printf("boolVar = %i\n", boolVar);

  return 0;
}

/*
  char                      %c
  _Bool                     %i,%u
  short int                 %hi,%hx,%ho
  unsigned short int        %hu,%hx,%ho
  int                       %i,%x,%o
  unsigned int              %u,%x,%o
  long int                  %li,%lx,%lo
  unsigned long int         %lu,%lx,%lo
  long long int             %lli,%llx,%llo 
  unsigned long long int    %llu,%llx,%llo
  float                     %f,%e,%g,%a
  double                    %f,%e,%g,%a
  long double               %Lf,$Le,%Lg

*/
