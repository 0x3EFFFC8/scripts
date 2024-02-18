#include <stdio.h>
#include <stdlib.h>

int main(){
  
  float pAux;
  float note;
  float res;
  float ans;
  char buffer[50];
  int ptmp = 100;

  for (int i = 0; i < ptmp; i++){ 
    printf("Enter the percentage: ");

    fgets(buffer, sizeof(buffer), stdin);
    pAux = strtol(buffer, NULL, 10);
  
    if (ptmp-pAux < 0)
      pAux = ptmp;
    ptmp -= pAux;

    printf("Enter the note: ");
  
    fgets(buffer, sizeof(buffer), stdin);
    res = strtol(buffer, NULL, 10); 
    
    note += (pAux/100) * res;

  }

  printf("%f",note);

  return 0;

}
