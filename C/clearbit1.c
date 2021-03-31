#include <stdio.h>
#include <stdlib.h>

//  Declare a global variable named Reg_01 which is suitable to
//  store a single byte.
//  *  DO NOT ASSIGN A VALUE TO THIS VARIABLE AT THE POINT OF DECLARATION.

// INSERT CODE HERE.

//  Declare a global variable named Reg_02 which is suitable to
//  store a single byte.
//  *  DO NOT ASSIGN A VALUE TO THIS VARIABLE AT THE POINT OF DECLARATION.

// INSERT CODE HERE.

//  Declare a global variable named Reg_03 which is suitable to
//  store a single byte.
//  *  DO NOT ASSIGN A VALUE TO THIS VARIABLE AT THE POINT OF DECLARATION.

// INSERT CODE HERE.

//  Declare a global variable named Reg_04 which is suitable to
//  store a single byte.
//  *  DO NOT ASSIGN A VALUE TO THIS VARIABLE AT THE POINT OF DECLARATION.

// INSERT CODE HERE.

//  Declare a global variable named Reg_05 which is suitable to
//  store a single byte.
//  *  DO NOT ASSIGN A VALUE TO THIS VARIABLE AT THE POINT OF DECLARATION.

// INSERT CODE HERE.

//  Declare a global variable named Reg_06 which is suitable to
//  store a single byte.
//  *  DO NOT ASSIGN A VALUE TO THIS VARIABLE AT THE POINT OF DECLARATION.

// INSERT CODE HERE.

//  Declare a global variable named Reg_07 which is suitable to
//  store a single byte.
//  *  DO NOT ASSIGN A VALUE TO THIS VARIABLE AT THE POINT OF DECLARATION.

// INSERT CODE HERE.

//  Declare a global variable named Reg_08 which is suitable to
//  store a single byte.
//  *  DO NOT ASSIGN A VALUE TO THIS VARIABLE AT THE POINT OF DECLARATION.

// INSERT CODE HERE.

//  Declare a global variable named Reg_09 which is suitable to
//  store a single byte.
//  *  DO NOT ASSIGN A VALUE TO THIS VARIABLE AT THE POINT OF DECLARATION.

// INSERT CODE HERE.

//  Declare a global variable named Reg_10 which is suitable to
//  store a single byte.
//  *  DO NOT ASSIGN A VALUE TO THIS VARIABLE AT THE POINT OF DECLARATION.

// INSERT CODE HERE.


void zero_bits () {
    //  Modify the value of global variable Reg_01, clearing
    //  bit 0, and leaving all other bits unaltered.

    // INSERT CODE HERE.

    //  Modify the value of global variable Reg_02, clearing
    //  bit 2, and leaving all other bits unaltered.

    // INSERT CODE HERE.

    //  Modify the value of global variable Reg_03, clearing
    //  bits 0, 2, and leaving all other bits unaltered.

    // INSERT CODE HERE.

    //  Modify the value of global variable Reg_04, clearing
    //  bits 4, 7, and leaving all other bits unaltered.

    // INSERT CODE HERE.

    //  Modify the value of global variable Reg_05, clearing
    //  bits 0, 2, 7, and leaving all other bits unaltered.

    // INSERT CODE HERE.

    //  Modify the value of global variable Reg_06, clearing
    //  bits 1, 3, 4, and leaving all other bits unaltered.

    // INSERT CODE HERE.

    //  Modify the value of global variable Reg_07, clearing
    //  bits 0, 3, 6, 7, and leaving all other bits unaltered.

    // INSERT CODE HERE.

    //  Modify the value of global variable Reg_08, clearing
    //  bits 2, 3, 4, 6, and leaving all other bits unaltered.

    // INSERT CODE HERE.

    //  Modify the value of global variable Reg_09, clearing
    //  bits 0, 1, 3, 4, 7, and leaving all other bits unaltered.

    // INSERT CODE HERE.

    //  Modify the value of global variable Reg_10, clearing
    //  bits 1, 3, 4, 6, 7, and leaving all other bits unaltered.

    // INSERT CODE HERE.


}


void print_bits( const char * label, unsigned char val){
    printf("%s bits = {", label);

    int deja = 0;

    for (int i = 0; i <= 7; i++) {
        if ( (val & (1 << i)) ) {
            printf("%s%d", (deja ? ", " : ""), i);
            deja = 1;
        }
    }

    printf("}\n");
}

int main(int argc, char * argv[]) {
    unsigned char init_val = 0;

    if (argc > 1) init_val = atoi(argv[1]) & 255;

    Reg_01 = init_val;
    Reg_02 = init_val;
    Reg_03 = init_val;
    Reg_04 = init_val;
    Reg_05 = init_val;
    Reg_06 = init_val;
    Reg_07 = init_val;
    Reg_08 = init_val;
    Reg_09 = init_val;
    Reg_10 = init_val;


    zero_bits();

    print_bits("Initial", init_val);
    print_bits("Reg_01", Reg_01);
    print_bits("Reg_02", Reg_02);
    print_bits("Reg_03", Reg_03);
    print_bits("Reg_04", Reg_04);
    print_bits("Reg_05", Reg_05);
    print_bits("Reg_06", Reg_06);
    print_bits("Reg_07", Reg_07);
    print_bits("Reg_08", Reg_08);
    print_bits("Reg_09", Reg_09);
    print_bits("Reg_10", Reg_10);


    return 0;
}
