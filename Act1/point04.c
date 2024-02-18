#include <stdio.h>

int factorial(int n);

int main(){

  int a;
  long double ans;

  scanf("%d",&a);
  ans = factorial(a);
  printf("%Lf",ans);
  
  return 0;

}

int factorial(int n){
  if (n < 1)
    return 1;
  else
    return (n*factorial(n-1));
}


