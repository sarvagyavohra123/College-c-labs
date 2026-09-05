#include<stdio.h>
#include<conio.h>

void main() {
int m,i;
int t1=0, t2=1, nextterm;
clrscr();

printf("enter the number of terms (m):\n");
scanf("%d", &m);

printf("the fibonacci series is:\n");

for(i=1; i<=m; i++) {
   printf("%d\n", t1);
   nextterm=t1 + t2;
   t1=t2;
   t2=nextterm;
 }
 printf("\nprogram done by: sarvagya mait\n");
 getch();

 }