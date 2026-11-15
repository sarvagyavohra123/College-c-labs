#include<stdio.h>

int main() {
    float bytes;

    printf("enter size in bytes: ")
    scanf("%f", &bytes);

    printf("size in kilobytes= %.2f KB\n", bytes/1024.0);
    printf("project done by sarvagya mait\n");
    return 0;
    }
