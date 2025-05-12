# Code Description
## The program works as follows:



### Structure Definition:

- A structure triangle is defined with three integer fields a, b, and c, representing the lengths of the sides of a triangle.
Functions:

- double calculate_area(triangle tr): This function calculates and returns the area of the triangle using Heron's formula:

- Area=𝑝⋅(𝑝−𝑎)⋅(𝑝−𝑏)⋅(𝑝−𝑐)Area= p⋅(p−a)⋅(p−b)⋅(p−c) where 𝑝=𝑎+𝑏+𝑐2p= 2a+b+c is the semi-perimeter of the triangle.

- void sort_by_area(triangle* tr, int n): This function sorts the array of triangles in ascending order based on their calculated areas using the Bubble Sort algorithm.

### Main Function:

- The program first reads the number of triangles (n).
- It then takes input for the side lengths (a, b, c) of each triangle.
- It calculates the area of each triangle, sorts the triangles based on their area, and finally prints the sorted triangles.

### Input Format
- The first line contains an integer n, representing the number of triangles.
- The next n lines each contain three integers: a, b, and c, representing the lengths of the sides of a triangle.

### Output Format
- The program outputs n lines, each containing the side lengths a, b, and c of the triangles sorted in ascending order by their area.

### Explanation:
- The triangle with sides 3, 4, 5 has the smallest area.
- The triangle with sides 5, 12, 13 has the second smallest area.
- The triangle with sides 7, 24, 25 has the largest area.
