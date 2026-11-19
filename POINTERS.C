#include<stdio.h>
#include<conio.h>

int main() {
    int a[50], n, s=0, *p=a;
    clrscr();

    printf("enter n & elements:\n");
    scanf("%d", &n);
    while( p<a+n && scanf("%d", p)) s+= *p++;

    printf("sum= %d\nproject done by sarvagya mait\n", s);
    getch();
    return 0;
    }
