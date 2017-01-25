#include "stdio.h"

int main() {
	int a,b; 

	
	for (a=1; a<=5; a++) {
		for (b=1; b<=5; b++) {
			if (a==3 && b ==3) printf("X ");
			else if (a%2==0 && b%2==0 || a%2==1 && b%2==1) printf("S ");
			else printf("O ");
		}
		printf("\n");
	}
	
	puts("================");
	puts("another logic");
	puts("================");
	
	for (a=1; a<=5; a++) {
		for (b=a; b<=a+4; b++) {
			if (a==3 && b ==a+2) printf("X ");
			else if (b%2==1) printf("S ");
			else printf("O ");
		}
		printf("\n");
	}
}