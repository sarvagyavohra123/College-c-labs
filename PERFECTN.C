#include<stdio.h>
#include<conio.h>

int isPerfect(int num) {
    int i, sum=0;
    for (i=1; i<=num/2; i++) {
       if (num % i==0) {
	  sum+= i;
	  }
       }
       return (sum==num && num>0);
     }

     int main() {
     int start, end, i;
     clrscr();

     printf("Enter start and end of interval: ");
     scanf("%d %d", &start, &end);

     printf("perfect numbers: ");
     for (i=start; i<=end; i++) {
	 if (isPerfect(i)) {
	    printf("%d",i)

	    ;


	    }
	  }
	  printf("project done by sarvagya mait\n");
	  getch();
	  return 0;
	  }