#include<stdio.h>
void main(void) {
  int n,m,S,T;

  n = 2;
  m = 1;
  S = 1;
  T = 1;

  while((n <= 5000000) && (m <= 5000000)) {
    if(S == T) {
      printf("%d\n",S);
      S+=n;
      n++;
    }
    else if(S < T) {
      while(S < T) {
	S+=n;
	n++;
      }
    }
    else {
      while(S > T) {
	T+=2*m+1;
	m++;
      }
    }
  }
}
