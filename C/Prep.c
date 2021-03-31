
//QUESTION 1
#include<stdio.h>
int main(){
	int x = 166 ;
	printf("\nNumber is Shifted By 1 Bit : %d",x);

	return(0);
}
/*
//QUESTION 2
//#include <stdio.h> 
  
int main(int argc, char * argv[]) { 
	printf("Hello World.\n"); 
    return 0; 
} 
//printf is not a keyword 
//the correct statement is that the include line is not needed because it does not access the file system

*/
/*
//QUESTION 3
In serial data transmission via Universal Synchronous/Asynchronous Receiver/Transmitter (USART),
 a character may be defined to consist of 5, 6, 7, 8, or 9 data bits. In a particular scenario, 
 the system designers have determined that a character size of 9 bits is required. 
 How many distinct values are possible for a variable which is transmitted as a single “character” in this scenario?

 So 2^9 = ans
*/

/*
//QUESTION 4
Assume that Timer 0 has been initialised to generate a PWM signal which modulates 
the signal on the I/O pin labelled “6” on an Arduino Uno. Which method listed below is the most reliable way 
to modify the duty cycle of the signal after it has been initialised?

TCCR0B ??
*/

/*
//QUESTION 5
*/

/*
//QUESTION 6
#include<stdio.h>
int main(){
int x = (1<<7) | (1<<5) | (1<<4) | (1<<2) | (1<<1);
	printf("\nNumber is Shifted By 1 Bit : %d",x);

	return(0);
}
Output is 182
*/

/*
//QUESTION X
*/

/*
//QUESTION X
*/

/*
//QUESTION 9
#include <stdio.h> 
#include <stdlib.h> 
  
void process(uint8_t b); 
 
int main(int argc, char * argv[]) { 
     int x; 
     while (1 == scanf("%d", &x)) { 
         if (x & 255) process(x & 255); 
     } 
     return 0; 
 } 
 void process(uint8_t b) { 
     printf("%d ->", b); 
     for (int i = 0; i < 8; i++) { 
         if ((b >> i) & 1) printf(" %d", i); 
     } 
 }
*/



