#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char name[50];
    printf("Enter your name: ");
    scanf("%s", name);
    printf("Hello, %s!", name);
    return 0;
}
