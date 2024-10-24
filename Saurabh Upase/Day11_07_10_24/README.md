# Archer Coding Club
# Code Description

# Hint to solve code

## DAY 11 7/10/24
   ### Trapping Rain Water:
  ##### Approach:-

###### Use two pointers:
- left (starting from the beginning of the array) and right (starting from the end of the array).
- Maintain two variables, leftMax and rightMax, to track the maximum heights encountered from the left and right side of the array respectively.
- Also, maintain a variable water to store the total water trapped.

###### Traverse the Array:
- Move the pointers inward towards each other.
- At each step, compare leftMax and rightMax:
- If leftMax is less than rightMax, then the amount of water trapped at the left pointer depends on leftMax (because rightMax guarantees that a taller block exists on the right).
- If leftMax is greater than the height of the current block at left, trap water.
- Update leftMax and move the left pointer to the right.
- Similarly, if rightMax is less than leftMax, calculate the water trapped at the right pointer, update rightMax, and move the right pointer to the left.

 ###### Continue until the pointers meet:

- Once the two pointers meet, the entire array has been traversed, and the total trapped water has been calculated.


