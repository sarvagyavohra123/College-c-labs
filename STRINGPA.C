#include<stdio.h>
#include<conio.h>

int main() {
    char str[100];
    int i=0, j, len=0, flag=1;
    clrscr();


    printf("enter a string: ");
    gets(str);

    while (str[len] != '\0') {
	 len++;
	 }
	 j= len-1;
	 while(i<j) {
	    if (str[i] != str[j]) {
	      flag=0;
	      break;
	      }
	      i++;
	      j--;
	      }

	      if (flag==1)
	      printf("string is a palindrome\n");
	      else
	      printf("string is not a palindrome\n");

	      printf("project done by sarvagya mait\n");
	      getch();

	      return 0;
	      }
