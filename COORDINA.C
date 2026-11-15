#include<stdio.h>

 int main() {
     int x, y;

     printf("enter X and Y coordinates: ");
     scanf("%d %d", &x, &y);

     if (x > 0 && y > 0) printf( "quadrant 1\n");
     else if( x < 0 && y > 0) printf("quadrant 2\n");
     else if(x < 0 && y < 0) printf(" quadrant 3\n");
     else if( x > 0 && y < 0) printf("quadrant 4\n");
     else if (x==0 && y==0) printf(" origini\n");
     else printf(" on an axis\n");

     printf("project done by sarvagya mait\n");
     return 0;

     }

