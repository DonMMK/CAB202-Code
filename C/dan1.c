#include <stdarg.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <stdio.h>
#include <math.h>

int create_hist( float _arrayIn[], int _usableElements, int _arrayOut[15] ) { //Check for how many elements
	// TODO: INSERT CODE HERE
    // Clear the array
    for( int counter = 0; counter <= 15 ; counter++ ){
        _arrayOut[counter] = 0;
    }

    // Making the hisogram
    for ( int counter = 0; counter <= 15 ; counter++){
        int index = floor(_arrayIn(counter));
        _arrayOut[index + 1]++;
    }

    return _arrayOut[15];
}

void call_function( const char * label, double x[], int count ) {
	int hist[15 + 1];
	create_hist( x, count, hist );
	printf( "%s\n", label );
	printf( "\tInput data:\n" );

	for ( int i = 0; i < count; i++ ) {
		printf( "\t%d\t%f\n", i, x[i] );
	}

	printf( "\tHistogram:\n" );

	for ( int i = 0; i <= 15; i++ ) {
		printf( "\t%d\t%d\n", i, hist[i] );
	}

	printf( "\n" );
}

int main( void ) {
	srand( time( NULL ) );

	double x1[] = { 0 };
	call_function( "Count == 0", x1, 0 );

	double x2[] = { 0, 0, 0 };
	call_function( "Three equal values", x2, 3 );

	double x3[15 + 1];
	for ( int i = 0; i <= 15; i++ ) {
		x3[i] = i;
	}
	call_function( "One value in each bucket", x3, 15 + 1 );

	double x4[15 * 2 + 1];
	for ( int i = 0; i <= 15 * 2; i++ ) {
		x4[i] = (15+1) * ( double ) rand() / RAND_MAX;
	}
	call_function( "Random values", x4, 15 * 2 + 1 );

	return 0;
}