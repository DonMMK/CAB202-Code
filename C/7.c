#include<stdio.h>
int main(){
	int x = (1<<7) | (1<<5) | (1<<4) | (1<<2) | (1<<1);
	printf("\nNumber is Shifted By 1 Bit : %d",x);

	return(0);
}