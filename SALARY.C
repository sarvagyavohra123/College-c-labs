#include<stdio.h>

int main() {
    float b;
    printf("enter basic salary: ");
    scanf("%f", &b);

    switch ((b > 10000) + (b > 20000)) {
	case 0: b+= b*1.00; break;
	case 1: b+= b*1.15; break;
	case 2: b+= b*1.25; break;
     }
     printf("gross salary= %.2f\nProject done by sarvagya mait\n", b);
     return 0;
  }
