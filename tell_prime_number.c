#include<stdio.h>

int main(void) {
  int i,n;

  printf("input n: ");
  scanf("%d",&n);
  
  for(i=2; i*i<n; i++) {
    if(n%i==0) break;
  }
  if(((n % i != 0) && (n != 1)) || (n == 2))
    printf("a prime number\n");
  else
    printf("not a prime number\n");
  return(0);
}
