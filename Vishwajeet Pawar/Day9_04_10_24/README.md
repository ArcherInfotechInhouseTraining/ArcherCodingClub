## Input Handling:
- The program begins by reading an integer t which indicates the number of test cases. It then reads t long integers and checks the data types they can fit into.

## Data Type Checking:
- For each number:

- The program first checks if the number fits in a byte (which can store values between -128 and 127).
- If it doesn't fit in a byte, it checks for short, which can store values between -32,768 and 32,767.
- The program then checks if the number fits in an int (ranging from -2^31 to 2^31-1).
- Finally, the program checks if it fits in a long (which can store values between -2^63 to 2^63-1).

## Exception Handling:
- If the number exceeds the range of a long (which is the largest primitive data type in Java), the program catches an exception and prints that the number "can't be fitted anywhere."
