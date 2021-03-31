*Decimal Representation of Numeric Data*

Due to only being able to use four digits the carry hasnt been stored anywhere. This is overflow.
Can happen during calculations.
Programmer must take measurements to ensure it does not happen

in base 10 we use something called base compliment

9's compliment
1)Substract each digit from 9.
2)Add 1 to the resulting 4 digit number
to verify   A+ (-A) = 0

Multiplication by power of 10
A = 0035, 10xA = 0350
          100xA= 3500
         1000xA= 5000
Left shift.

Division by power of 10
A= 1234
A/(10^0)= A/1   = 1234
A/(10^1)= A/10  = 0123
A/(10^1)= A/100 = 0012
Right shift.


*Binary Representation of Numerical Data*

    4-digit decimal               8-bit Binary
Min|0  base2                      0 base2
Max| 9999                         11111111

Know how to represent the decimal numbers in Binary

2's compliment: 1's comp + 1
That is 1000 0000 - 0000 1100 = 1111 0011
then plus 0000 0001

Multiplication by power of 2
7x(2^0) = 111x 1 = 111
7x(2^1) = 111x 2 = 1110 i.e 111 + 111 = 1110


*Bitwise operation on bytes*



Bitmask is a number used to extract data from a register



*Youtube Video*
Adding binary then carrying the one.

Negative integers are stored in 2's compliment

1st bit represents the sign
0 means Positive
1 means Negative

(1)Convert the number to Binary
(2)Invert bits
(3)Add 1 ie 0000 0001

Example 123>> _111 1011
      invert  _000 0100
      add 1   _000 0101
invert 1st    1000 0101

Left shift

Logical shift
1110 1001 >>>>>> 0111 0100

Arithmetic shift

Shift including the first bit but also makes the first bit what it was

1110 1001 >>>>>> 1111 0100
