# A place to store information about c-tutorials

## C Information
- Low level language
- Import header file that contains function that you need, but don't need to append header file name to function used in code.
- C will overflow its variable types and wrap around to the start of the type's range.
- gcc compilier gives you warnings on how you assign variables and if you assign the wrong type.

### Constants
- define by the following
```
const int AGE = 37
or 
#define AGE 37 (c compilier will infer type)
```

### C Unary Operators (take one operand)
+a
-a
a++ (increments variable after using it) or ++a (increments variable before using it)
a-- or --a

### Logical Operators
Not !
OR ||
AND &&

### Ternary Operator
```
<condition> ? <expression> : <expression>
```

### Bitwise operators
#### & (bitwise AND), for every bit of two numbers, return 1 if both bits are 1
#### | (bitwise OR), for every bit of two numbers, return 1 if any of the two bits are 1.
#### ^ (bitwise XOR), for every bit of two numbers, return 1 if two bits are different.
#### << (left shift), shifts to the left the bits of the first operand by the number specified in the second operand
#### >> (right shift), shifts to the right the bits of the first operand by the number specified in the second operand
#### ~ (bitwise NOT), inverts all bits of one number.
#### How to calculate decimal value from binary value

### Pointer Operators
Operator 	Operator Name 	Purpose
* 		Value at Operator 	Gives Value stored at Particular address
& 		Address Operator 	Gives Address of Variable


### Missing Bitwise operators, structure operators, and pointer operators.
- 10010 = (1 × 2^4) + (0 × 2^3) + (0 × 2^2) + (1 × 2^1) + (0 × 2^0) = 18 
- 00001101 = (1 × 2^3) + (1 × 2^2) + (0 × 2^1) + (1 × 2^0) = 13

### Defining a string
- The last value in a char array must be a 0 (below has 6 chars, but 7 spots)
- char name[7] = "Flavio";

