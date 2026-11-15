#include<stdio.h>

 int main() {
     int r, c, x, min, max, i=0;
     printf("enter rows and cols: ");
     scanf("%d %d", &r, &c);

     printf(" enter elements:\n");
     while (i++ < r * c && scanf("%d", &x)) {
	   if (i==1) min= max= x;
	   if (x < min) min=x;
	   if (x > max) max=x;
	   }
	   printf("Min=%d\nMax= %d\nproject done by sarvagya mait\n", min, max
	   );
	   return 0;
	   }