#include <stdio.h>

int main() {
    int n;
    
    scanf("%d", &n);
    
    if (n > 0) {
        for (int i = 1; i <= n / 2; i++) {
            if (i != n - i && i % 2 == 0) {
                printf("Yes\n");
                return 0;
            }
        }
        printf("No\n");
    } else {
        printf("Invalid input\n");
    }
    
    return 0;
}
