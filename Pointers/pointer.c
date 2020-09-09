#include<stdio.h>

int main() {
	int n = 20;
	printf("\nThe address of n is %p",(void*) &n);
	printf("\nThe Value of n is %d",n);
	printf("\nThe Value of n is %d",*(&n));
}