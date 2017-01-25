#include "stdio.h"

int main() {
	int a,b;	
	for (a=1; a<=6; a++) {
		for (b=a; b<=a+5; b++) {
			if (a==3 && (b ==a+2 || b==a+3) || a==4 && (b ==a+2 || b==a+3)) printf("- ");
			else if (b%2==1) printf("0 ");
			else printf("X ");
		}
		printf("\n");
	}
}

/* output will be :

0 X 0 X 0 X 
X 0 X 0 X 0 
0 X - - 0 X 
X 0 - - X 0 
0 X 0 X 0 X 
X 0 X 0 X 0 

*/