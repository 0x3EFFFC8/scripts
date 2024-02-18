#include <stdio.h>
#include <stdbool.h>

bool prime(int n);

int main(){
  
  int n;
  
  printf("%s\n", prime(n) ? "True" : "False");
  
  return 0;

}

bool prime(int n){
  bool ans = true; 
  for(int i = 2; i < n; i+=1){
    if (n % i == 0)
      ans = false;
  }
  return ans;
}
