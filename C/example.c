
#include <stdio.h> 
#include <stdlib.h> 
#include <limits.h> 

#define MAX_VAL 25 
#define MIN_VAL -15 

// Declare and initialise any additional global variables here, as required.
int list[41];
int index[41];
int counter = 0;


void process(int x) { 
    // Process one value here. 
    for(int k =0; i<= 40; i++){
    	index[k] = k-10;

    }
    for(int i =0; i<=40; i++){
    	if(x > MIN_VAL && MAX_VAL){
    		if(index[i] == x){
    			int counter = (index[i] + 10);
    			list[counter]++;
    		}
    	}

    }


} //END process

void post_process() { 
    // Compute derived results here. 
} 

void print() { 
    // Print results here 
    for (int x = MIN_VAL; x <= MAX_VAL; x++){
    	printf("%d -> %d \n",index[x], list[x]);
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



