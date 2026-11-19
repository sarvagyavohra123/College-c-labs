#include<stdio.h>
#include<conio.h>

int main() {
    int a[50], b[50], n1, n2, i, j, m=0;
    clrscr();

    printf("enter n1, array1, n2, array2:\n");
    scanf("%d", &n1);
    for(i=0; i < n1; i++) scanf("%d", &a[i]);
    scanf("%d", &n2);
    for(i=0; i<n2; i++) scanf("%d", &b[i]);
    for(i=0; i<n2; i++)
      for(j=0; j< n1; j++)
	 if (b[i] == a[j]) {m++; break; }
	 printf("%s\nproject done by sarvagya mait\n", m==n2 ? "subset" : "not a subset");
	 getch();
	 return 0;
     }