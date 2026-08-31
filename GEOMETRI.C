#include<stdio.h>
int main() {
    float a, r, sum=0;
    int n, i;
    printf("enter the first term(a): ");
    scanf("%f", &a);

    printf("enter the common ratio (r): ");
    scanf("%f", &r);

    printf("enter the number of terms(n): ");
    scanf("%d", &n);

    for(i=0; i<n; i++) {
    sum=sum+a;
    a= a*r;
    }
    printf("the sum of the geometric series is: %2f\n", sum);
    return 0;
    }