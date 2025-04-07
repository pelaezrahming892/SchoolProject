#include <stdio.h>
int main() {
    int i;
    printf("Enter an integer: ");
    scanf("%d", &i);
    if (i % 2 == 0) {
        printf("Even\n");
    } else {
        printf("Odd\n");
    }
    return 0;
}
