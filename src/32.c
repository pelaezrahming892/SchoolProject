#include <stdio.h>

void main() {
    int x = 5;
    int y;

    if (x > 0) {
        y = x + 1;
    } else {
        y = x * 2;
    }

    printf("The value of y is: %d\n", y);
}
