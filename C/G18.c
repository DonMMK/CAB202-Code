#include <stdio.h> 
#include <stdlib.h> 
#include <limits.h> 

#define MAX_VAL 30 
#define MIN_VAL -10 

// Declare and initialise any additional global variables here, as required. 
int numlist[41];
int numindex[41] = {-10,-9,-8,-7,-6,-5-,4,-3,-2,-1,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30};
int count = 0;

void process(int x) {
	for(int k = 0; k <= 40; k++){
		numindex[k] = k-10;
	}		
	for(int i = 0; i <= 40; i++){
   if(x > MIN_VAL && x < MAX_VAL){
	   if(numindex[i] == x){
		   int count = (numindex[i] + 10);
		   numlist[count]++;
	   }
   }
   }
} 

void post_process() { 
    // Compute derived results here. 
} 

void print() { 
   for(int x = MIN_VAL; x <= MAX_VAL; x++){
	   printf("%d -> %d \n",numindex[x], numlist[x]);
   } 
} 

int main(void) { 
    int x; 
    while (1 == scanf("%d", &x)) { 
        process(x); 
    } 
    post_process(); 
    print(); 
    return 0; 
}
