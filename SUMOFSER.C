#include<stdio.h>
#include<conio.h>

void main () {
int i;
float sum=0.0;
clrscr();

for(i=1; i<=20; i++) {

    sum= sum+ (1.0/i);
}

printf("sum of the series is %f\n", sum);

printf("\nprogram done by:sarvagya mait\n");
getch();

}