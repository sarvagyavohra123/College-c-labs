#include<stdio.h>
int main() {
    int n, i, j , space, coef;

    printf("enter number of rows: ");
    scanf("%d", &n);

    for(i=0; i<n; i++) {
       for (space=1; space<=n - i; space++)
	   printf(" ");

	   coef=1;
	   for(j-0; j<=i; j++) {
	   printf("%d ", coef);
	   coef=coef* (i-j)/ (j+1);
	  }
	  printf("\n");
	  }
	  printf("project done by sarvagya mait\n");
	  return 0;
	  }