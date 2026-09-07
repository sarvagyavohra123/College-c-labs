#include<stdio.h>

int main() {
    char op;
    double n1, n2;
    printf("enter operator and 2 numbers( e.g., + 5 3): ");
    scanf(" %c %lf %lf", &op, &n1, &n2);

    printf("%.2lf %c %.2lf= ", n1,op, n2);
    switch(op) {
	case '+': printf("%.2lf\n", n1+n2); break;
	case '-': printf("%.2lf\n", n1-n2); break;
	case '*': printf("%.2lf\n", n1*n2); break;
	case '/': printf("%2lf\n", n1/n2); break;
	default: printf("Error! invalid operator.\n");
     }
     return 0;
   }