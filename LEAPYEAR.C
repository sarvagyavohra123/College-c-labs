#include<stdio.h>
#include<conio.h>

void main() {
int dd, mm, yy;
clrscr();

printf("enter date in dd/mm/yy format:\n");
scanf("%d/%d/%d", &dd, &mm, &yy);

if((yy % 4==0 && yy % 100 !=0) || (yy % 400==0)) {
  printf(" it is a leap year\n");
}
else {
     printf("it is not a leap year\n");
}
printf("\nprogram done by sarvagya mait\n");
getch();
}