# Code Description
## The program works as follows:



- A structure box is defined with three integer fields: length, width, and height.

### Function
- int get_volume(box b): This function calculates and returns the volume of the box by multiplying its length, width, and height.
- int is_lower_than_max_height(box b): This function checks if the height of the box is lower than the constant MAX_HEIGHT (defined as 41). It returns 1 if the height - is less than MAX_HEIGHT, and 0 otherwise.


### Main Function: 
- The program first reads the number of boxes.
- Then it takes input for the dimensions (length, width, and height) of each box.
- For each box, if its height is less than MAX_HEIGHT, the program calculates and prints the volume using the get_volume() function.

### Input Format
- The first line contains an integer n, representing the number of boxes.
- The next n lines each contain three integers: length, width, and height of a box.

### Output Format
- For each box whose height is less than MAX_HEIGHT, the program outputs the volume of the box. Each volume is printed on a new line.


### Explanation:
- The first box has dimensions 1x2x3, and its volume is 1 * 2 * 3 = 6.
- The second box has dimensions 3x4x5, and its volume is 3 * 4 * 5 = 60.
- The third box has height equal to MAX_HEIGHT (41), so its volume is not printed.

### Constraints
- MAX_HEIGHT = 41: The maximum height limit for which a box's volume will be calculated.
