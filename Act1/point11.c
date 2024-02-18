#include <stdio.h>

int main() {
    
    int ans;
    int a = 999;
    float b = 6.77;
    float c = 7.5;
    float ans1;
    
    ans1 = a + b; 

    printf("Implicit type casting:\n");
    printf("a + b = %f\n", ans1);

    ans = (int)c; 

    printf("\nExplicit type casting:\n");
    printf("(int)c = %d\n", ans);

    return 0;

}

