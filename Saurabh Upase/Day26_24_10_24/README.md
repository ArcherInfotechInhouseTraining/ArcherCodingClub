# Archer Coding Club
# Code Description

# Hint to solve code

## DAY 26 24/10/24
   ### Maximum product Subarray:
  ##### Approach:-

- Initialization:
- The length of the array n is stored.
-A variable max is initialized to the first element of the array. This will keep track of the maximum product found so far.

Outer Loop:
- The outer loop runs from the start of the array to the end (i from 0 to n-1). This loop determines the starting point of the subarray.

- Inner Loop:
- For each starting point i, the inner loop (j from i to n-1) calculates the product of the subarray starting at i and ending at j.
- A variable product is initialized to 1 and is used to store the product of the current subarray.

- Product Calculation:

- Inside the inner loop, the product of elements from index i to j is calculated.
- If the current product is greater than the max product found so far, max is updated.

- Return the Result:
After both loops complete, the function returns the maximum product found.