#include <stdio.h>

int main() {

    printf("[B 8]\t[B 10]\t[B 16]\n");

    for (int i = 1; i <= 10; i++) {
      printf("  %o\t  %d\t  %x\n", i, i, i);
    }

    return 0;
}
