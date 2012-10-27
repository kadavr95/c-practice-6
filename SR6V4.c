#include <stdio.h>
#include <math.h>

int main(void){
  float m[29], min=6,av,sum=0;
  short int x=-14;
  printf("Yaskovich Dmitry (T01-01c). Lab 6. Variant 22\n\n");
  for (x = -14; x <= 14; x+=0,7) {
	m[x+14]=5*cos(0.4*x);
	if (m[x+14]<min) {
	  min=m[x+14];
	}
	printf("No:%2d Element: %13.10f\n",x+14,m[x+14]);
  }
  for (x = 0; x <= 28; x+=2) {
	sum+=m[x];
  }
  av=sum/29;
  printf("\nMinimum:       %13.10f\n",min);
  printf("Average:       %13.10f\n\n",av);
  printf("Dimini Inc.\n");
  printf("For progressive future\n");
  printf("(c)2009-2012\n");
  fflush(stdin);
  getchar();
  return 0;
}
