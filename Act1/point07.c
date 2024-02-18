#include <stdio.h>

int fibonacci(int n);

int main(){

  int n;
    
  printf("Enter a number: ");
  scanf("%d",&n);

  for(int i = 0; i < n; i+=1){
    printf("%d ", fibonacci(i));
    fflush(stdout);
  }

  return 0;

}

int fibonacci(int n){
  if (n == 0) return 0;
  else if (n == 1) return 1;
  else return (fibonacci(n-1)+fibonacci(n-2));
}
