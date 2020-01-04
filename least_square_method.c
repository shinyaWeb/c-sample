#include<stdio.h>

int main(void) {
  
  int i;
  float a,b,x[50],y[50],ax,ay,Sxy,Sx;
  
  i = 0;
  ax = 0;
  ay = 0;
  Sx = 0;
  Sxy = 0;

  while(scanf("%f %f",&x[i],&y[i]) != EOF) {
    ax += x[i];
    ay += y[i];
    Sx += x[i] * x[i];
    Sxy += x[i] * y[i];
    i++;
  }
  
  ax = ax / i;
  ay = ay / i;
  Sx = (Sx / i) - ax * ax;
  Sxy = (Sxy / i) - ax * ay;
  a = Sxy / Sx;
  b = ay - ax * a;
  
  printf("a = %10.5f b = %10.5f\n",a,b);
  return(0);
}
