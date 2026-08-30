#include<stdio.h>
#include<conio.h>

int main() {
   int num, i;
   unsigned long factorial=1;
   clrscr();

   printf("enter an integer: ");
   scanf("%d", &num);

   if (num<0) {
   printf("Error! factorial of a negative number doesn't exist.\n");
   } else {
   for (i=1;,i <= num; ++i) {
   factorial=factorial*i;
   }
   printf("factorial of %d=%lu\n", num, factorial);
   }
   getch();
   return 0;
   }