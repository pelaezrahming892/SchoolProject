#include <stdio.h>

void main() {
    int i;
    int j;

    for(i = 0; i <= 10; i++) {
        for(j = i + 1; j <= 10; j++) {
            if(i != j) {
                printf("%d %d\n", i, j);
            }
        }
    }
}
