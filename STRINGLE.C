#include<stdio.h>
#include<conio.h>

 int main() {
     char s[100];
     int i=0;
     clrscr();

     printf("Enter string: ");
     gets(s);
     while (s[i]) i++;
     printf("length = %d\nproject done by sarvaya mait\n", i);
     getch();
     return 0;
     }
