#include <stdio.h>

int power(int n, int x);

int main(){

  int a; 
  int b;
  long double ans;

  printf("Base: ");
  scanf("%d",&a);
  printf("Exponent: ");
  scanf("%d",&b);
  
  ans = power(a,b);
  
  printf("%.0Lf",ans);
  
  return 0;

}

int power(int n, int x){
  if (x == 0)
    return 1; 
  else
    return n*power(n,x-1);
}
