#include<stdio.h>
#include<conio.h>

int main() {
    char s[100], *p=s;
    clrscr();

    printf("enter string: ");
    gets(s);
    while (*p) p++;

    printf("length= %d\nproject done by sarvagya mait\n", p-s);
    getch();
    return 0;
    }