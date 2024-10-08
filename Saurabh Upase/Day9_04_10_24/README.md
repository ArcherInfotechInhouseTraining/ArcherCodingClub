# Archer Coding Club
# Code Description

# Hint to solve code

## DAY 9 4/10/24
   ### Equilibrium Point:
  ##### Approach:-

   - Calculate total sum: Compute the total sum of the array.
   - Iterate through the array: Traverse the array while maintaining a running sum of the elements on the left side.
   - Check equilibrium condition: For each element at index i, check if the sum of elements to the left (running sum) is equal to the sum of elements to the right       (which can be derived from the total sum minus the current element and the left sum).
   - Update the sums: Update the left sum as you move to the next element.
   - Return the index: If you find such an index, return it as the equilibrium point (in 1-based indexing). If no such index is found, return -1.


