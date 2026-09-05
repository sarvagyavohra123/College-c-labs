#include<stdio.h>
#include<conio.h>

void main() {
int marks;
clrscr();

printf("enter marks:\n");
scanf("%d", &marks);

if(marks >=80 && marks<=90) {
  printf("excellent, grade a\n");
}
  else if( marks >=60 && marks< 80) {
       printf("grade b\n");
}
  else if( marks >=40 && marks < 60) {
       printf("grade c\n");
}
  else if ( marks< 40) {
     printf("fail\n");
}
  printf("\nprogram done by : sarvagya mait\n");

  getch();
}